/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software is delivered "as is" and shows the usage of other software
* components. It is provided as an example software which is intended to be
* modified and extended according to particular requirements.
*
* TARA Systems hereby disclaims all warranties and conditions with regard to the
* software, including all implied warranties and conditions of merchantability
* and non-infringement of any third party IPR or other rights which may result
* from the use or the inability to use the software.
*
********************************************************************************
*
* DESCRIPTION:
*   This file implements a generic framework for running Embedded Wizard
*   generated applications on a STM32 target with or without FreeRTOS.
*   The main() function initializes all needed peripheral components and
*   starts the Embedded Wizard applications main loop. This main loop
*   initializes the Embedded Wizard Runtime Environment / Graphics Engine,
*   creates an instance of the application class and drives the message
*   translation and screen updates.
*
*   In order to keep this framework independent from the particular GUI
*   application, the application class and the screen size are taken from the
*   generated code. In this manner, it is not necessary to modify this file
*   when creating new GUI applications. Just set the attributes 'ScreenSize'
*   and 'ApplicationClass' of the profile in the Embedded Wizard IDE.
*
*   This program demonstrates how to integrate an application developed using
*   Chora and Mosaic class library on a STM32 target.
*
*******************************************************************************/

#include <stdio.h>

#include "main.h"
#include "tarefasPMU.h"


#if EW_USE_FREE_RTOS == 1
  #include "cmsis_os.h"
#endif

tlsf_t MemPool;

static void EmWiMainLoop( const void* arg );

#if EW_USE_FREE_RTOS == 1
  #define semtstSTACK_SIZE    configMINIMAL_STACK_SIZE * 10
#endif

/* define pyhiscal dimension of the LCD framebuffer */
#define FRAME_BUFFER_WIDTH    480
#define FRAME_BUFFER_HEIGHT   272

/* calculated addresses for framebuffer(s) and memory manager */
#define FRAME_BUFFER_SIZE     FRAME_BUFFER_WIDTH * FRAME_BUFFER_HEIGHT * FRAME_BUFFER_DEPTH
#define FRAME_BUFFER_ADDR     (void*)(LCD_FB_START_ADDRESS)

#ifdef EW_USE_DOUBLE_BUFFER
  #define DOUBLE_BUFFER_ADDR  (void*)((unsigned char*)FRAME_BUFFER_ADDR + FRAME_BUFFER_SIZE)
  #define DOUBLE_BUFFER_SIZE  FRAME_BUFFER_SIZE
#else
  #define DOUBLE_BUFFER_ADDR  (void*)(0)
  #define DOUBLE_BUFFER_SIZE  0
  #define NUMBER_OF_FIELDS    3
#endif

#define MEMORY_POOL_ADDR      (void*)((unsigned char*)FRAME_BUFFER_ADDR + FRAME_BUFFER_SIZE + DOUBLE_BUFFER_SIZE)
#define MEMORY_POOL_SIZE      0x800000 - FRAME_BUFFER_SIZE - DOUBLE_BUFFER_SIZE

#undef USE_TERMINAL_INPUT

/********************* DEFINES **********************/
#define MEDIA_CALIB_POWER2 5
// Numero de Amostras sera 2^MEDIA_CALIB_POWER2
#define MEDIA_CALIB_SIZE (1<<MEDIA_CALIB_POWER2)

#if defined ( __ICCARM__ ) /*!< IAR Compiler */
#pragma location=0x20006024
uint8_t ucHeap[ configTOTAL_HEAP_SIZE ];
#elif defined ( __CC_ARM )
uint8_t ucHeap[ configTOTAL_HEAP_SIZE ] __attribute__((at(0x20006024)));
#elif defined ( __GNUC__ )
uint8_t ucHeap[ configTOTAL_HEAP_SIZE ];// __attribute__((section(".RamData2")));
#endif

/********************* VARIÁVEIS **********************/
UART_HandleTypeDef huart1;
UART_HandleTypeDef huart6;

ADC_HandleTypeDef hadc1;
ADC_HandleTypeDef hadc2;
ADC_HandleTypeDef hadc3;

DMA_HandleTypeDef hdma_adc1;

TIM_HandleTypeDef htim8;

RNG_HandleTypeDef RngHandle;

xSemaphoreHandle sUART;

osSemaphoreId uartSem_id;
//osMutexId uartMutex_id;
osSemaphoreId SerialGPS_semId;

osThreadId pmuThread_Id;
osThreadId gpsThread_Id;

osMessageQId SerialGPSq;

unsigned int DR1 = 0;

unsigned char TIM2_UART_Flag = 0, ADC_UART_Flag = 0;
volatile unsigned short adcBuffer[768] __attribute__((section(".ADCBUF")));;

/********************** DEFINIÇÕES DE FUNÇÕES *******************/
void UARTPutString(char *string, uint16_t size);

static void SerialSend(void const * argument);

static void RNG_Init(void);
static void MX_GPIO_Init(void);
static void MX_USART1_UART_Init(void);
static void MX_DMA_Init(void);
static void MX_ADCalibration_Init(void);
static void MX_TIM8_Init(void);
void MX_USART6_UART_Init(void);
void SSL_Client(void const *argument);
void PMU_Task(void const * argument);
void GPS_Task(void const * argument);
void CalculaMediaADC(unsigned short *avgArray);
unsigned int Get_ADC_Calib (void);

void Error_Handler(void);


/*******************************************************************************
* FUNCTION:
*   GetKeyCommand
*
* DESCRIPTION:
*   The function GetKeyCommand reads the next key code from the console and
*   translates it into an Embedded Wizard key code. The mapping between the key
*   code from the console and the resulting Embedded Wizard key code can be
*   adapted to the needs of your application.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   Returns the next EmWi key code or CoreKeyCodeNoKey if no key code available.
*
*******************************************************************************/
static XEnum GetKeyCommand( void )
{
  #ifdef USE_TERMINAL_INPUT
    switch ( EwBspGetCharacter())
    {
      case 0x65 : EwPrint("Key 'Exit' pressed\n");  return CoreKeyCodeExit;
      case 0x38 : EwPrint("Key 'Up' pressed\n");    return CoreKeyCodeUp;
      case 0x32 : EwPrint("Key 'Down' pressed\n");  return CoreKeyCodeDown;
      case 0x36 : EwPrint("Key 'Right' pressed\n"); return CoreKeyCodeRight;
      case 0x34 : EwPrint("Key 'Left' pressed\n");  return CoreKeyCodeLeft;
      case 0x35 : EwPrint("Key 'OK' pressed\n");    return CoreKeyCodeOk;
      case 0x6D : EwPrint("Key 'Menu' pressed\n");  return CoreKeyCodeMenu;
      case 0x70 : EwPrint("Key 'Power' pressed\n"); return CoreKeyCodePower;
    }
  #endif

  return CoreKeyCodeNoKey;
}


/*******************************************************************************
* FUNCTION:
*   Update
*
* DESCRIPTION:
*   The function Update performs the screen update of the dirty area.
*
* ARGUMENTS:
*   aViewPort    - Viewport used for the screen update.
*   aApplication - Root object used for the screen update.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
static void Update( XViewport* aViewport, CoreRoot aApplication )
{
  XBitmap*       bitmap;
  GraphicsCanvas canvas     = EwNewObject( GraphicsCanvas, 0 );
  XRect          updateRect = {{ 0, 0 }, { 0, 0 }};

#if EW_USE_DOUBLE_BUFFER

  bitmap = EwBeginUpdate( aViewport );

  /* let's redraw the dirty area of the screen. Cover the returned bitmap
     objects within a canvas, so Mosaic can draw to it. */
  if ( bitmap && canvas )
  {
    GraphicsCanvas__AttachBitmap( canvas, (XUInt32)bitmap );
    updateRect = CoreRoot__UpdateGE20( aApplication, canvas );
    GraphicsCanvas__DetachBitmap( canvas );
  }

  /* complete the update */
  if ( bitmap )
    EwEndUpdate( aViewport, updateRect );

#else

  int field = 0;

  /* start screen update */
  int regions = CoreRoot__BeginUpdate( aApplication );

  /* iterate through all fields (horizontal stripes) of the display */
  while ( regions && ( field < NUMBER_OF_FIELDS ))
  {
    /* determine rectangular area of current field */
    #if EW_SURFACE_ROTATION == 0
      updateRect = EwNewRect( 0, field * FRAME_BUFFER_HEIGHT / NUMBER_OF_FIELDS,
        FRAME_BUFFER_WIDTH, ( field + 1 ) * FRAME_BUFFER_HEIGHT / NUMBER_OF_FIELDS );
    #endif

    #if EW_SURFACE_ROTATION == 90
      updateRect = EwNewRect( field * FRAME_BUFFER_HEIGHT / NUMBER_OF_FIELDS, 0,
        ( field + 1 ) * FRAME_BUFFER_HEIGHT / NUMBER_OF_FIELDS, FRAME_BUFFER_WIDTH );
    #endif

    #if EW_SURFACE_ROTATION == 180
      updateRect = EwNewRect( 0, FRAME_BUFFER_HEIGHT - ( field + 1 ) * FRAME_BUFFER_HEIGHT / NUMBER_OF_FIELDS,
        FRAME_BUFFER_WIDTH, FRAME_BUFFER_HEIGHT - field * FRAME_BUFFER_HEIGHT / NUMBER_OF_FIELDS );
    #endif

    #if EW_SURFACE_ROTATION == 270
      updateRect = EwNewRect( FRAME_BUFFER_HEIGHT - ( field + 1 ) * FRAME_BUFFER_HEIGHT / NUMBER_OF_FIELDS,
        0, FRAME_BUFFER_HEIGHT - field * FRAME_BUFFER_HEIGHT / NUMBER_OF_FIELDS, FRAME_BUFFER_WIDTH );
    #endif

    /* next field */
    field++;

    /* sync on start line of next field to ensure save drawing operation */
    EwBspSyncOnDisplayLine(( field % NUMBER_OF_FIELDS ) * FRAME_BUFFER_HEIGHT / NUMBER_OF_FIELDS );

    /* draw area into current field */
    bitmap = EwBeginUpdateArea( aViewport, updateRect );
    GraphicsCanvas__AttachBitmap( canvas, (XUInt32)bitmap );
    CoreRoot__UpdateCanvas( aApplication, canvas, updateRect.Point1 );
    GraphicsCanvas__DetachBitmap( canvas );
    EwEndUpdate( aViewport, updateRect );
  }
  CoreRoot__EndUpdate( aApplication );

#endif
}


/*******************************************************************************
* FUNCTION:
*   main
*
* DESCRIPTION:
*   The main function of the whole application. The main function initializes all
*   necessary drivers and provides a for-ever loop to drive the EmWi application.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   Zero if successful.
*
*******************************************************************************/
int main( void )
{
	/*	Aqui entra:
	 * 	- MPU_Config
	 * 	- CPU_CACHE_Enable
	 * 	- SystemClock_Config
	 * 	- HAL_Init	 */
	EwBspConfigSystem();

	/* configure system tick counter */
	EwBspConfigSystemTick();

	/* configure realtime clock */
	EwBspConfigRealTimeClock();

	/********* Inicialização dos Periféricos *********/
	MX_GPIO_Init();
	//MX_USART1_UART_Init();
	MX_ADCalibration_Init();
	MX_DMA_Init();
	MX_TIM8_Init();
	//MX_TIM8_Init();
	RNG_Init();
	BSP_LED_Init(LED1);

	/* initialize serial interface for debugging and connect xprintf module */
	//  EwBspConfigSerial();
	//  xdev_out( EwBspPutCharacter );

	/********* Definição das tarefas *********/

	/* Start SSL Client task : Connect to SSL server and provide the SSL handshake protocol */
	//osThreadDef(Client, SSL_Client, osPriorityHigh, 0, 5 * 1024);
	//osThreadCreate (osThread(Client), NULL);

	//osSemaphoreDef(uartSem);
	//uartSem_id = osSemaphoreCreate(osSemaphore(uartSem), 1);
	//uartMutex_id = osMutexCreate(osMutex(uartMutex));

	/* Cria tarefa do GPS */
	osThreadDef(gpsTask, GPS_Task, osPriorityHigh, 0, 1024);
	gpsThread_Id = osThreadCreate (osThread(gpsTask), NULL);

	/* Cria tarefa de estimação fasorial */
	osThreadDef(pmuTask, PMU_Task, osPriorityRealtime, 0, 2048);
	pmuThread_Id = osThreadCreate (osThread(pmuTask), NULL);

	#if EW_USE_FREE_RTOS == 1

	  /* create thread that drives the Embedded Wizard GUI application... */
	//  EwPrint( "Create UI thread...                          " );
	  osThreadDef( EmWiThreadHandle, EmWiMainLoop, osPriorityNormal, 0, semtstSTACK_SIZE );
	  osThreadCreate( osThread( EmWiThreadHandle ), (void*)0 );
	//  EwPrint( "[OK]\n" );

	  /* ...and start scheduler */
	  osKernelStart();

	#else

  /* enter the Embedded Wizard main loop */
  EmWiMainLoop( 0 );

#endif

  return 0;
}


/*******************************************************************************
* FUNCTION:
*   EmWiMainLoop
*
* DESCRIPTION:
*   The EmWiMainLoop is responsible to initialize the Graphics Engine and the
*   application object of the UI application and to provide a for-ever loop to
*   drive the UI application.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None.
*
*******************************************************************************/
static void EmWiMainLoop( const void* arg )
{
  CoreRoot   rootObject;
  XViewport* viewport;
  XEnum      cmd = CoreKeyCodeNoKey;

  int        touched = 0;
  XPoint     touchPos;

  /* initialize display */
//  EwPrint( "Initialize Display...                        " );
  EwBspConfigDisplay( FRAME_BUFFER_WIDTH, FRAME_BUFFER_HEIGHT, FRAME_BUFFER_ADDR );
//  EwPrint( "[OK]\n" );

  /* initialize touchscreen */
//  EwPrint( "Initialize Touch Driver...                   " );
  EwBspConfigTouch( FRAME_BUFFER_WIDTH, FRAME_BUFFER_HEIGHT );
//  EwPrint( "[OK]\n" );

  /* initialize tlsf memory manager */
  /* please note, that the first part of SDRAM is reserved for framebuffer */
//  EwPrint( "Initialize Memory Manager...                 " );
  MemPool = tlsf_create_with_pool( MEMORY_POOL_ADDR, MEMORY_POOL_SIZE );
//  EwPrint( "[OK]\n" );
//  EwPrint( "MemoryPool at address 0x%08X size 0x%08X\n", MEMORY_POOL_ADDR, MEMORY_POOL_SIZE );

  /* initialize the Graphics Engine and Runtime Environment */
//  EwPrint( "Initialize Graphics Engine...                " );
  if ( !EwInitGraphicsEngine( 0 ))
    return;
//  EwPrint( "[OK]\n" );

  /* create the applications root object ... */
//  EwPrint( "Create Embedded Wizard Root Object...        " );
  rootObject = (CoreRoot)EwNewObjectIndirect( EwApplicationClass, 0 );
  EwLockObject( rootObject );
  CoreRoot__Initialize( rootObject, EwScreenSize );
//  EwPrint( "[OK]\n" );

  /* create Embedded Wizard viewport object to provide uniform access to the framebuffer */
//  EwPrint( "Create Embedded Wizard Viewport...           " );
  viewport = EwInitViewport( EwScreenSize, EwNewRect( 0, 0, FRAME_BUFFER_WIDTH, FRAME_BUFFER_HEIGHT ),
    0, 255, FRAME_BUFFER_ADDR, DOUBLE_BUFFER_ADDR, 0, 0 );
//  EwPrint( "[OK]\n" );

  /* Initialize your device driver(s) that provide data for your GUI */
  DeviceDriver_Initialize();

  /* start the Embedded Wizard main loop and process all user inputs, timers and signals */
  while ( cmd != CoreKeyCodePower )
  {
    int timers  = 0;
    int signals = 0;
    int events  = 0;
    int devices = 0;

    /* process data of your device driver(s) and update the GUI
       application by setting properties or by triggering events */
    devices = DeviceDriver_ProcessData();

    /* receive keyboard inputs */
    cmd = GetKeyCommand();

    if ( cmd != CoreKeyCodeNoKey )
    {
      /* feed the application with a 'press' and 'release' event */
      events |= CoreRoot__DriveKeyboardHitting( rootObject, cmd, 0, 1 );
      events |= CoreRoot__DriveKeyboardHitting( rootObject, cmd, 0, 0 );
    }

    /* receive touch inputs and provide the application with them */
    if ( EwBspGetTouchPosition( &touchPos ))
    {
      /* begin of touch cycle */
      if ( touched == 0 )
        CoreRoot__DriveCursorHitting( rootObject, 1, 0, touchPos );

      /* movement during touch cycle */
      else if ( touched == 1 )
        CoreRoot__DriveCursorMovement( rootObject, touchPos );

      touched = 1;
      events  = 1;
    }
    /* end of touch cycle */
    else if ( touched == 1 )
    {
      CoreRoot__DriveCursorHitting( rootObject, 0, 0, touchPos );
      touched = 0;
      events  = 1;
    }

    /* process expired timers */
    timers = EwProcessTimers();

    /* process the pending signals */
    signals = EwProcessSignals();

    /* refresh the screen, if something has changed and draw its content */
    if ( devices || timers || signals || events )
    {
      if ( CoreRoot__DoesNeedUpdate( rootObject ))
        Update( viewport, rootObject );

      /* after each processed message start the garbage collection */
      EwReclaimMemory();

      /* print current memory statistic to serial interface - uncomment if needed */
      //EwPrintProfilerStatistic( 0 );
    }
    /* otherwise sleep/suspend the UI application until a certain event occurs or a timer expires... */
    else
      EwBspWaitForSystemEvent( EwNextTimerExpiration());
  }

  /* Deinitialize your device driver(s) */
  DeviceDriver_Deinitialize();

  /* finished -> release unused resources and memory */
//  EwPrint( "Shutting down application...                 " );
  EwDoneViewport( viewport );
  EwUnlockObject( rootObject );
  EwReclaimMemory();

  /* ... and deinitialize the Graphics Engine */
  EwDoneGraphicsEngine();

//  EwPrint( "[OK]\n" );

  tlsf_destroy( MemPool );
}

/******************* IMPLEMENTAÇÕES DE FUNÇÕES **********************/
void UARTPutString(char *string, uint16_t size){

	// Descobre o tamanho da string, caso não informado
	if (!size){
		uint8_t *tmp = (uint8_t *)string;

		while(*tmp++){
			size++;
		}
	}

	/* Transmite uma sequencia de dados, com fluxo controlado pela interrupção */
	HAL_UART_Transmit_IT(&huart6,(uint8_t *)string,size);

	// Wait indefinitely for a UART interrupt
	xSemaphoreTake(sUART, portMAX_DELAY);

}

static void SerialSend(void const * argument){
	unsigned long i = 0;
	char msg[64];

	osSemaphoreWait(uartSem_id, osWaitForever);
	HAL_UART_Transmit_IT(&huart1, (uint8_t*)"\033[0;0H", strlen("\033[0;0H"));

	osSemaphoreWait(uartSem_id, osWaitForever);
	HAL_UART_Transmit_IT(&huart1, (uint8_t*)"\033[2J", strlen("\033[2J"));

	while(1){
/*
		if(ADC_UART_Flag == 1){
			unsigned short valores[3];
			valores[0] = adcBuffer[0];
			valores[1] = adcBuffer[1];
			valores[2] = adcBuffer[2];

			osSemaphoreWait(uartSem_id, osWaitForever);
			sprintf(msg,"Valor de tensão do ADC1: %f \r\n", (float)(valores[0]*3.3/4096));

			osSemaphoreWait(uartSem_id, osWaitForever);
			sprintf(msg,"Valor de tensão do ADC2: %f \r\n", (float)(valores[1]*3.3/4096));

			osSemaphoreWait(uartSem_id, osWaitForever);
			sprintf(msg,"Valor de tensão do ADC3: %f \r\n", (float)(valores[2]*3.3/4096));

			ADC_UART_Flag = 0;
		}
*/

		sprintf(msg, "Mensagem numero %lu\r\n", i);
		osSemaphoreWait(uartSem_id, osWaitForever);
		HAL_UART_Transmit_IT(&huart1, (uint8_t*)msg, strlen(msg));
		i++;
		osDelay(1000);
	}
	osThreadTerminate(NULL);

}

static void RNG_Init(void)
{
  RngHandle.Instance = RNG;
 /* DeInitialize the RNG peripheral */
  if (HAL_RNG_DeInit(&RngHandle) != HAL_OK)
  {
    /* DeInitialization Error */
    //Error_Handler();
  }

  /* Initialize the RNG peripheral */
  __HAL_RCC_RNG_CLK_ENABLE();
  if (HAL_RNG_Init(&RngHandle) != HAL_OK)
  {
    /* Initialization Error */
    //Error_Handler();
  }
}

static void MX_GPIO_Init(void)
{

  /* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOC_CLK_ENABLE();
	__HAL_RCC_GPIOH_CLK_ENABLE();
	__HAL_RCC_GPIOF_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOI_CLK_ENABLE();
}

static void MX_USART1_UART_Init(void)
{

  huart1.Instance = USART1;
  huart1.Init.BaudRate = 115200;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  huart1.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  huart1.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  if (HAL_UART_Init(&huart1) != HAL_OK)
  {
    Error_Handler();
  }

  //HAL_NVIC_SetPriority(USART2_IRQn, 0x2, 0);
 // HAL_NVIC_EnableIRQ(USART2_IRQn);

}

static void MX_DMA_Init(void)
{
  /* DMA controller clock enable */
  __HAL_RCC_DMA2_CLK_ENABLE();

  /* DMA interrupt init */
  /* DMA2_Stream0_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA2_Stream4_IRQn, 0x5, 0);
  HAL_NVIC_EnableIRQ(DMA2_Stream4_IRQn);

}

static void MX_ADCalibration_Init(void)
{

  ADC_MultiModeTypeDef multimode;
  ADC_ChannelConfTypeDef sConfig;

    /**Configure the global features of the ADC (Clock, Resolution, Data Alignment and number of conversion)
    */
  hadc1.Instance = ADC1;
  hadc1.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV6;
  hadc1.Init.Resolution = ADC_RESOLUTION_12B;
  hadc1.Init.ScanConvMode = DISABLE;
  hadc1.Init.ContinuousConvMode = ENABLE;
  hadc1.Init.DiscontinuousConvMode = DISABLE;
  hadc1.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE ;
  hadc1.Init.ExternalTrigConv = 0;
  hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc1.Init.NbrOfConversion = 1;
  hadc1.Init.DMAContinuousRequests = DISABLE;
  hadc1.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  if (HAL_ADC_Init(&hadc1) != HAL_OK)
  {
    Error_Handler();
  }

    /**Configure the ADC multi-mode
    */
  multimode.Mode = ADC_MODE_INDEPENDENT ;
  multimode.DMAAccessMode = ADC_DMAACCESSMODE_DISABLED;
  multimode.TwoSamplingDelay = ADC_TWOSAMPLINGDELAY_5CYCLES;
  if (HAL_ADCEx_MultiModeConfigChannel(&hadc1, &multimode) != HAL_OK)
  {
    Error_Handler();
  }

    /**Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
    */
  sConfig.Channel = ADC_CHANNEL_VREFINT;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_480CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }

  HAL_ADC_Start(&hadc1);

  unsigned int n=0;

  for(n=0;n<MEDIA_CALIB_SIZE;n++){

	HAL_ADC_PollForConversion(&hadc1, HAL_MAX_DELAY);

	DR1 += hadc1.Instance->DR;

  }
	HAL_ADC_Stop(&hadc1);
	HAL_ADC_DeInit(&hadc1);
	DR1 = DR1 >> MEDIA_CALIB_POWER2;


}

/* TIM8 init function */
static void MX_TIM8_Init(void)
{
  TIM_ClockConfigTypeDef sClockSourceConfig;
  TIM_SlaveConfigTypeDef sSlaveConfig;
  TIM_MasterConfigTypeDef sMasterConfig;

  htim8.Instance = TIM8;
  htim8.Init.Prescaler = 0;
  htim8.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim8.Init.Period = 6509;
  htim8.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim8.Init.RepetitionCounter = 0;
  htim8.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim8) != HAL_OK)
  {
    Error_Handler();
  }

  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim8, &sClockSourceConfig) != HAL_OK)
  {
	  Error_Handler();
  }

  sSlaveConfig.SlaveMode = TIM_SLAVEMODE_TRIGGER;
  sSlaveConfig.InputTrigger = TIM_TS_ETRF;
  sSlaveConfig.TriggerPolarity = TIM_TRIGGERPOLARITY_NONINVERTED;
  sSlaveConfig.TriggerPrescaler = TIM_TRIGGERPRESCALER_DIV1;
  sSlaveConfig.TriggerFilter = 0;
  if (HAL_TIM_SlaveConfigSynchronization(&htim8, &sSlaveConfig) != HAL_OK)
  {
    Error_Handler();
  }

  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterOutputTrigger2 = TIM_TRGO2_UPDATE;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim8, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }

}

void MX_USART6_UART_Init(void)
{


	  huart6.Instance = USART6;
	  huart6.Init.BaudRate = 115200;
	  huart6.Init.WordLength = UART_WORDLENGTH_8B;
	  huart6.Init.StopBits = UART_STOPBITS_1;
	  huart6.Init.Parity = UART_PARITY_NONE;
	  huart6.Init.Mode = UART_MODE_TX_RX;
	  huart6.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	  huart6.Init.OverSampling = UART_OVERSAMPLING_16;
	  huart6.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;

	  if (HAL_UART_Init(&huart6) != HAL_OK)
	  {
		Error_Handler();
	  }

  //Toma o semáforo para que ele já inicie fechado quando entrar na tarefa do GPS
 // osSemaphoreWait(SerialGPS_semId, osWaitForever);

}

void CalculaMediaADC(unsigned short *avgArray){
	unsigned long avg1 = 0, avg2 = 0, avg3 = 0;
	unsigned short adcIx1 = 0, adcIx2 = 1, adcIx3 = 2;

	for(short i = 0; i < 768; i++){
		if(i == adcIx1){
			avg1 = adcBuffer[i];
			adcIx1 += 3;
		}
		else if(i == adcIx2){
			avg2 = adcBuffer[i];
			adcIx2 += 3;
		}
		else if(i == adcIx3){
			avg3 = adcBuffer[i];
			adcIx3 += 3;
		}
	}

	avg1 /= 256;
	avg2 /= 256;
	avg3 /= 256;

	avgArray[0] = (unsigned short)avg1;
	avgArray[1] = (unsigned short)avg2;
	avgArray[2] = (unsigned short)avg3;
}

unsigned int Get_ADC_Calib (void){
	return DR1;
}

void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler */
  /* User can add his own implementation to report the HAL error return state */
  while(1)
  {
  }
  /* USER CODE END Error_Handler */
}

/* ADC1 init function */
void MX_ADC1_Init(void)
{

  ADC_MultiModeTypeDef multimode;
  ADC_ChannelConfTypeDef sConfig;

    /**Configure the global features of the ADC (Clock, Resolution, Data Alignment and number of conversion)
    */
  hadc1.Instance = ADC1;
  hadc1.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV6;
  hadc1.Init.Resolution = ADC_RESOLUTION_12B;
  hadc1.Init.ScanConvMode = DISABLE;
  hadc1.Init.ContinuousConvMode = DISABLE;
  hadc1.Init.DiscontinuousConvMode = DISABLE;
  hadc1.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_RISING;
  hadc1.Init.ExternalTrigConv = ADC_EXTERNALTRIGCONV_T8_TRGO2;
  hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc1.Init.NbrOfConversion = 1;
  hadc1.Init.DMAContinuousRequests = ENABLE;
  hadc1.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  if (HAL_ADC_Init(&hadc1) != HAL_OK)
  {
    Error_Handler();
  }

  /* Peripheral DMA init*/

  hdma_adc1.Instance = DMA2_Stream4;
  hdma_adc1.Init.Channel = DMA_CHANNEL_0;
  hdma_adc1.Init.Direction = DMA_PERIPH_TO_MEMORY;
  hdma_adc1.Init.PeriphInc = DMA_PINC_DISABLE;
  hdma_adc1.Init.MemInc = DMA_MINC_ENABLE;
  hdma_adc1.Init.PeriphDataAlignment = DMA_PDATAALIGN_HALFWORD;
  hdma_adc1.Init.MemDataAlignment = DMA_MDATAALIGN_HALFWORD;
  hdma_adc1.Init.Mode = DMA_CIRCULAR;
  hdma_adc1.Init.Priority = DMA_PRIORITY_VERY_HIGH;
  hdma_adc1.Init.FIFOMode = DMA_FIFOMODE_DISABLE;
  if (HAL_DMA_Init(&hdma_adc1) != HAL_OK)
  {
    Error_Handler();
  }

  __HAL_LINKDMA(&hadc1,DMA_Handle,hdma_adc1);

	/*##-4- Configure the NVIC for DMA #########################################*/
	/* NVIC configuration for DMA transfer complete interrupt */
	HAL_NVIC_SetPriority(DMA2_Stream4_IRQn, 0x05, 0);
	HAL_NVIC_EnableIRQ(DMA2_Stream4_IRQn);

    /**Configure the ADC multi-mode
    */
  multimode.Mode = ADC_TRIPLEMODE_REGSIMULT;
  multimode.DMAAccessMode = ADC_DMAACCESSMODE_1;
  multimode.TwoSamplingDelay = ADC_TWOSAMPLINGDELAY_5CYCLES;
  if (HAL_ADCEx_MultiModeConfigChannel(&hadc1, &multimode) != HAL_OK)
  {
    Error_Handler();
  }

    /**Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
    */
  sConfig.Channel = ADC_CHANNEL_0;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_480CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }

}

/* ADC2 init function */
void MX_ADC2_Init(void)
{

  ADC_ChannelConfTypeDef sConfig;

    /**Configure the global features of the ADC (Clock, Resolution, Data Alignment and number of conversion)
    */
  hadc2.Instance = ADC2;
  hadc2.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV6;
  hadc2.Init.Resolution = ADC_RESOLUTION_12B;
  hadc2.Init.ScanConvMode = DISABLE;
  hadc2.Init.ContinuousConvMode = DISABLE;
  hadc2.Init.DiscontinuousConvMode = DISABLE;
  hadc2.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc2.Init.NbrOfConversion = 1;
  hadc2.Init.DMAContinuousRequests = DISABLE;
  hadc2.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  if (HAL_ADC_Init(&hadc2) != HAL_OK)
  {
    Error_Handler();
  }

    /**Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
    */
  sConfig.Channel = ADC_CHANNEL_4;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_480CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc2, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }

}

/* ADC3 init function */
void MX_ADC3_Init(void)
{

  ADC_ChannelConfTypeDef sConfig;

    /**Configure the global features of the ADC (Clock, Resolution, Data Alignment and number of conversion)
    */
  hadc3.Instance = ADC3;
  hadc3.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV6;
  hadc3.Init.Resolution = ADC_RESOLUTION_12B;
  hadc3.Init.ScanConvMode = DISABLE;
  hadc3.Init.ContinuousConvMode = DISABLE;
  hadc3.Init.DiscontinuousConvMode = DISABLE;
  hadc3.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc3.Init.NbrOfConversion = 1;
  hadc3.Init.DMAContinuousRequests = DISABLE;
  hadc3.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  if (HAL_ADC_Init(&hadc3) != HAL_OK)
  {
    Error_Handler();
  }

    /**Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
    */
  sConfig.Channel = ADC_CHANNEL_4;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_480CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc3, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }

}

/********************** CALLBACKS ******************/
//Callback chamado quando a UART finaliza a recepção do fluxo de bytes
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart){
	if(huart->Instance == USART6){

		signed portBASE_TYPE pxHigherPriorityTaskWokenRX = pdFALSE;

		xQueueSendToBackFromISR(SerialGPSq, &huart->Instance->RDR, &pxHigherPriorityTaskWokenRX);

		if (pxHigherPriorityTaskWokenRX == pdTRUE){

		portYIELD();

		}
	}

}


/* msy, mli */
