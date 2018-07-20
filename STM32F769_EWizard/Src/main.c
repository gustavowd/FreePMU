/**
  ******************************************************************************
  * File Name          : main.c
  * Description        : Main program body
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2017 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f7xx_hal.h"

/* USER CODE BEGIN Includes */
#include "stm32f769i_discovery.h"
#include "stm32f769i_discovery_lcd.h"
#include "stm32f769i_discovery_sdram.h"

/* FatFs includes components */
#include "ff_gen_drv.h"
#include "usbh_diskio.h"

#include <stdio.h>

#if EW_USE_FREE_RTOS == 1
  #include "cmsis_os.h"
#endif

#include "xprintf.h"
#include "tlsf.h"

#include "ewrte.h"
#include "ewgfx.h"
#include "ewextgfx.h"
#include "ewgfxdefs.h"
#include "Core.h"
#include "Graphics.h"

#include "ew_bsp_system.h"
#include "ew_bsp_clock.h"
#include "ew_bsp_event.h"
#include "ew_bsp_display.h"
#include "ew_bsp_touch.h"
#include "ew_bsp_serial.h"
#include "DeviceDriver.h"

#include "TarefasPMU.h"

tlsf_t MemPool;

static void EmWiMainLoop( const void* arg );

#if EW_USE_FREE_RTOS == 1
  #define semtstSTACK_SIZE    configMINIMAL_STACK_SIZE * 20
#endif

/* define pyhiscal dimension of the LCD framebuffer */
#define FRAME_BUFFER_WIDTH    800
#define FRAME_BUFFER_HEIGHT   480

/* calculated addresses for framebuffer(s) and memory manager */
#define FRAME_BUFFER_SIZE     FRAME_BUFFER_WIDTH * FRAME_BUFFER_HEIGHT * FRAME_BUFFER_DEPTH
#define FRAME_BUFFER_ADDR     (void*)(LCD_FB_START_ADDRESS)

#ifdef EW_USE_DOUBLE_BUFFER
  #define DOUBLE_BUFFER_ADDR  (void*)((unsigned char*)FRAME_BUFFER_ADDR + FRAME_BUFFER_SIZE)
  #define DOUBLE_BUFFER_SIZE  FRAME_BUFFER_SIZE
#else
  #define DOUBLE_BUFFER_ADDR  (void*)(0)
  #define DOUBLE_BUFFER_SIZE  0
#endif

#define MEMORY_POOL_ADDR      (void*)((unsigned char*)FRAME_BUFFER_ADDR + FRAME_BUFFER_SIZE + DOUBLE_BUFFER_SIZE)
#define MEMORY_POOL_SIZE      0x800000 - FRAME_BUFFER_SIZE - DOUBLE_BUFFER_SIZE

#undef USE_TERMINAL_INPUT
/* USER CODE END Includes */

/* Private variables ---------------------------------------------------------*/

osThreadId defaultTaskHandle;

/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/
#define MEDIA_CALIB_POWER2 7
// Numero de Amostras sera 2^MEDIA_CALIB_POWER2
#define MEDIA_CALIB_SIZE (1<<MEDIA_CALIB_POWER2)

/********************* VARIÁVEIS **********************/
UART_HandleTypeDef huart1;
UART_HandleTypeDef huart6;

ADC_HandleTypeDef hadc1;
ADC_HandleTypeDef hadc2;
ADC_HandleTypeDef hadc3;

DMA_HandleTypeDef hdma_adc1;

TIM_HandleTypeDef htim1;
TIM_HandleTypeDef htim2;

RNG_HandleTypeDef RngHandle;

xSemaphoreHandle sUART;

osSemaphoreId uartSem_id;
//osMutexId uartMutex_id;

osThreadId pmuThread_Id;
osThreadId gpsThread_Id;
osThreadId dhcpThread_Id;

osMessageQId SerialGPSq;

unsigned int DR1 = 0;

unsigned char TIM2_UART_Flag = 0, ADC_UART_Flag = 0;

/********************** DEFINIÇÕES DE FUNÇÕES *******************/
static void RNG_Init(void);
static void MX_GPIO_Init(void);
//static void MX_USART1_UART_Init(void);
static void MX_DMA_Init(void);
static void MX_ADCalibration_Init(void);
static void MX_TIM1_Init(void);
void MX_TIM2_Init(void);
void MX_USART6_UART_Init(void);
void DHCP_Thread(void const * argument);

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);

/* USER CODE BEGIN PFP */
/* Private function prototypes -----------------------------------------------*/

/* USER CODE END PFP */

/* USER CODE BEGIN 0 */
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
  XBitmap*       bitmap     = EwBeginUpdate( aViewport );
  GraphicsCanvas canvas     = EwNewObject( GraphicsCanvas, 0 );
  XRect          updateRect = {{ 0, 0 }, { 0, 0 }};

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

  /* check if there is a dirty area so that the screen should be updated */
  if (( updateRect.Point2.X - updateRect.Point1.X <= 0 ) || ( updateRect.Point2.Y - updateRect.Point1.Y <= 0 ))
    return;

  /* start the update of the LCD via DSI */
  EwBspUpdateDisplay();
}

/* USER CODE END 0 */
/* Exported constants --------------------------------------------------------*/
#define FILEMGR_LIST_DEPDTH                     20
#define FILEMGR_FILE_NAME_SIZE                  64
#define FILEMGR_MAX_LEVEL                        3
#define FILEMGR_MAX_EXT_SIZE                     3

#define FILETYPE_DIR                             0
#define FILETYPE_FILE                            1

#define NUM_DISK_UNITS                           1
#define USB_DISK_UNIT                            0
/* Exported types ------------------------------------------------------------*/
typedef enum
{
USBDISK_DISCONNECTION_EVENT = 1,
USBDISK_CONNECTION_EVENT,
}
STORAGE_EventTypeDef;

typedef struct _FILELIST_LineTypeDef
{
uint8_t               type;
uint8_t               name[FILEMGR_FILE_NAME_SIZE];

}
FILELIST_LineTypeDef;

typedef struct _FILELIST_FileTypeDef
{
FILELIST_LineTypeDef  file[FILEMGR_LIST_DEPDTH] ;
uint16_t              ptr;
}
FILELIST_FileTypeDef;


/* Private defines -----------------------------------------------------------*/
/* Private macros ------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
FATFS USBDISK_FatFs;         /* File system object for USB disk logical drive */
char USBDISK_Drive[4];       /* USB Host logical drive number */
USBH_HandleTypeDef  hUSB_Host;
osMessageQId StorageEvent;
DIR dir;

static uint32_t StorageStatus[NUM_DISK_UNITS];

/**
  * @brief  Storage Thread
  * @param  argument: pointer that is passed to the thread function as start argument.
  * @retval None
  */
static void StorageThread(void const * argument)
{
  osEvent event;

  for( ;; )
  {
    event = osMessageGet( StorageEvent, osWaitForever );

    if( event.status == osEventMessage )
    {
      switch(event.value.v)
      {
      case USBDISK_CONNECTION_EVENT:
        f_mount(&USBDISK_FatFs,USBDISK_Drive,  0);
        StorageStatus[USB_DISK_UNIT] = 1;
        break;

      case USBDISK_DISCONNECTION_EVENT:
        f_mount(0, USBDISK_Drive, 0);
        StorageStatus[USB_DISK_UNIT] = 0;
        break;
      }
    }
  }
}

/**
  * @brief  User Process
  * @param  phost: Host handle
  * @param  id:    Host Library user message ID
  * @retval None
  */
static void USBH_UserProcess  (USBH_HandleTypeDef *phost, uint8_t id)
{
  switch (id)
  {
  case HOST_USER_SELECT_CONFIGURATION:
    break;

  case HOST_USER_DISCONNECTION:
    osMessagePut ( StorageEvent, USBDISK_DISCONNECTION_EVENT, 0);
    break;

  case HOST_USER_CLASS_ACTIVE:
    osMessagePut ( StorageEvent, USBDISK_CONNECTION_EVENT, 0);
    break;
  }
}

void pendrive(void){
	  /* Link the USB Host disk I/O driver */
	  FATFS_LinkDriver(&USBH_Driver, USBDISK_Drive);

	  /* Init Host Library */
	  USBH_Init(&hUSB_Host, USBH_UserProcess, 0);

	    /* Create USB background task */
	  osThreadDef(STORAGE_Thread, StorageThread, osPriorityLow, 0, 1024);
	  osThreadCreate (osThread(STORAGE_Thread), NULL);

	  /* Create Storage Message Queue */
	  osMessageQDef(osqueue, 10, uint16_t);
	  StorageEvent = osMessageCreate (osMessageQ(osqueue), NULL);

	  /* Add Supported Class */
	  USBH_RegisterClass(&hUSB_Host, USBH_MSC_CLASS);

	  /* Start Host Process */
	  USBH_Start(&hUSB_Host);
}


int main(void)
{

  /* USER CODE BEGIN 1 */
	  /* initalize system */
	  EwBspConfigSystem();

	  /* configure system tick counter */
	  EwBspConfigSystemTick();

	  /* configure realtime clock */
	  EwBspConfigRealTimeClock();

	  /* initialize serial interface for debugging and connect xprintf module */
	  EwBspConfigSerial();
	  xdev_out( EwBspPutCharacter );

		/********* Inicialização dos Periféricos *********/
	    MX_GPIO_Init();
		//MX_USART1_UART_Init();
		MX_ADCalibration_Init();
		MX_DMA_Init();
		MX_TIM1_Init();
		MX_TIM2_Init();
		RNG_Init();
		BSP_LED_Init(LED1);
		BSP_LED_Init(LED2);

		/* Cria tarefa do DHCP */
		osThreadDef(dhcpTask, DHCP_Thread, osPriorityHigh, 0, 2048);
		dhcpThread_Id = osThreadCreate (osThread(dhcpTask), NULL);

		/* Cria tarefa do GPS */
		osThreadDef(gpsTask, GPS_Task, osPriorityHigh, 0, 2048);
		gpsThread_Id = osThreadCreate (osThread(gpsTask), NULL);

		/* Cria tarefa de estimação fasorial */
		osThreadDef(pmuTask, PMU_Task, osPriorityRealtime, 0, 2048);
		pmuThread_Id = osThreadCreate (osThread(pmuTask), NULL);

	#if EW_USE_FREE_RTOS == 1

	  /* create thread that drives the Embedded Wizard GUI application... */
	  //EwPrint( "Create UI thread...                          " );
	  osThreadDef( EmWiThreadHandle, EmWiMainLoop, osPriorityBelowNormal, 0, semtstSTACK_SIZE );
	  osThreadCreate( osThread( EmWiThreadHandle ), (void*)0 );
	  //EwPrint( "[OK]\n\r" );

	  /* ...and start scheduler */
	  osKernelStart();

	#else

	  /* enter the Embedded Wizard main loop */
	  EmWiMainLoop( 0 );

	#endif

	  return 0;
  /* USER CODE END 1 */

  /* MCU Configuration----------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
 // HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  //SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();

  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* Create the thread(s) */
  /* definition and creation of defaultTask */
  //osThreadDef(defaultTask, StartDefaultTask, osPriorityNormal, 0, 128);
  //defaultTaskHandle = osThreadCreate(osThread(defaultTask), NULL);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */
 

  /* Start scheduler */
  //osKernelStart();
  
  /* We should never get here as control is now taken by the scheduler */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
  /* USER CODE END WHILE */

  /* USER CODE BEGIN 3 */

  }
  /* USER CODE END 3 */

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

  pendrive();

  /* initialize display */
  //EwPrint( "Initialize Display...                        " );
  EwBspConfigDisplay( FRAME_BUFFER_WIDTH, FRAME_BUFFER_HEIGHT, FRAME_BUFFER_ADDR );
  //EwPrint( "[OK]\n" );

  /* initialize touchscreen */
  //EwPrint( "Initialize Touch Driver...                   " );
  EwBspConfigTouch( FRAME_BUFFER_WIDTH, FRAME_BUFFER_HEIGHT );
  //EwPrint( "[OK]\n" );

  /* initialize tlsf memory manager */
  /* please note, that the first part of SDRAM is reserved for framebuffer */
  //EwPrint( "Initialize Memory Manager...                 " );
  MemPool = tlsf_create_with_pool( MEMORY_POOL_ADDR, MEMORY_POOL_SIZE );
  //EwPrint( "[OK]\n" );
  //EwPrint( "MemoryPool at address 0x%08X size 0x%08X\n", MEMORY_POOL_ADDR, MEMORY_POOL_SIZE );

  /* initialize the Graphics Engine and Runtime Environment */
  //EwPrint( "Initialize Graphics Engine...                " );
  if ( !EwInitGraphicsEngine( 0 ))
    return;
  //EwPrint( "[OK]\n" );

  /* create the applications root object ... */
  //EwPrint( "Create Embedded Wizard Root Object...        " );
  rootObject = (CoreRoot)EwNewObjectIndirect( EwApplicationClass, 0 );
  EwLockObject( rootObject );
  CoreRoot__Initialize( rootObject, EwScreenSize );
  //EwPrint( "[OK]\n" );

  /* create Embedded Wizard viewport object to provide uniform access to the framebuffer */
  //EwPrint( "Create Embedded Wizard Viewport...           " );
  viewport = EwInitViewport( EwScreenSize, EwNewRect( 0, 0, FRAME_BUFFER_WIDTH, FRAME_BUFFER_HEIGHT ),
    0, 255, FRAME_BUFFER_ADDR, DOUBLE_BUFFER_ADDR, 0, 0 );
  //EwPrint( "[OK]\n" );

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
      Update( viewport, rootObject );

      /* after each processed message start the garbage collection */
      EwReclaimMemory();

      /* print current memory statistic to serial interface - uncomment if needed */
      //  EwPrintProfilerStatistic( 0 );
    }
    /* otherwise sleep/suspend the UI application until a certain event occurs or a timer expires... */
    else
      EwBspWaitForSystemEvent( EwNextTimerExpiration());
  }

  /* Deinitialize your device driver(s) */
  DeviceDriver_Deinitialize();

  /* finished -> release unused resources and memory */
  EwPrint( "Shutting down application...                 " );
  EwDoneViewport( viewport );
  EwUnlockObject( rootObject );
  EwReclaimMemory();

  /* ... and deinitialize the Graphics Engine */
  EwDoneGraphicsEngine();

  EwPrint( "[OK]\n" );

  tlsf_destroy( MemPool );
}


/* RNG init function */
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

/** System Clock Configuration
*/
void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;

    /**Configure the main internal regulator output voltage 
    */
  __HAL_RCC_PWR_CLK_ENABLE();

  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

    /**Initializes the CPU, AHB and APB busses clocks 
    */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 25;
  RCC_OscInitStruct.PLL.PLLN = 432;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Activate the Over-Drive mode 
    */
  if (HAL_PWREx_EnableOverDrive() != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Initializes the CPU, AHB and APB busses clocks 
    */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the Systick interrupt time 
    */
  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000);

    /**Configure the Systick 
    */
  HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

  /* SysTick_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(SysTick_IRQn, 15, 0);
}

static void MX_GPIO_Init(void)
{

  /* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOC_CLK_ENABLE();
	__HAL_RCC_GPIOH_CLK_ENABLE();
	__HAL_RCC_GPIOF_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();
    __HAL_RCC_GPIOA_CLK_ENABLE();


    GPIO_InitTypeDef  gpio_init_structure;

    /* Configure the GPIO_LED pin */
    gpio_init_structure.Pin   = GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_9;
    gpio_init_structure.Mode  = GPIO_MODE_OUTPUT_PP;
    gpio_init_structure.Pull  = GPIO_NOPULL;
    gpio_init_structure.Speed = GPIO_SPEED_HIGH;

    HAL_GPIO_Init(GPIOF, &gpio_init_structure);
}

#if 0
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
	  _Error_Handler(__FILE__, __LINE__);
  }

  //HAL_NVIC_SetPriority(USART2_IRQn, 0x2, 0);
 // HAL_NVIC_EnableIRQ(USART2_IRQn);

}
#endif

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
  hadc1.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV4;
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
	  //_Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the ADC multi-mode
    */
  multimode.Mode = ADC_MODE_INDEPENDENT ;
  multimode.DMAAccessMode = ADC_DMAACCESSMODE_DISABLED;
  multimode.TwoSamplingDelay = ADC_TWOSAMPLINGDELAY_5CYCLES;
  if (HAL_ADCEx_MultiModeConfigChannel(&hadc1, &multimode) != HAL_OK)
  {
	  //_Error_Handler(__FILE__, __LINE__);
  }

    /**Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
    */
  sConfig.Channel = ADC_CHANNEL_VREFINT;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_480CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
	  //_Error_Handler(__FILE__, __LINE__);
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

static void MX_TIM1_Init(void)
{

  TIM_ClockConfigTypeDef sClockSourceConfig;
  TIM_SlaveConfigTypeDef sSlaveConfig;
  TIM_MasterConfigTypeDef sMasterConfig;

  htim1.Instance = TIM1;
  htim1.Init.Prescaler = 0;
  htim1.Init.CounterMode = TIM_COUNTERMODE_UP;
  #if (NOMINAL_FREQ == 60)
  #if (OVERSAMPLING  == 1)
  htim1.Init.Period = 1708; //60 Hz - //1708 - 8x; //3417 - 4x;//13671 - 1x;
  #else
  htim1.Init.Period = 13671; //60 Hz - //1708 - 8x; //3417 - 4x;//13671 - 1x;
  #endif
  #endif
  #if (NOMINAL_FREQ == 50)
  #if (OVERSAMPLING  == 1)
  htim1.Init.Period = 1953; //50 Hz - //1953 - 8x; //3906 - 4x;//15625 - 1x;
  #else
  htim1.Init.Period = 15625-1;//50 Hz - //1953 - 8x; //3906 - 4x;//15625 - 1x;
  #endif
  #endif
  htim1.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim1.Init.RepetitionCounter = 0;
  htim1.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;
  if (HAL_TIM_Base_Init(&htim1) != HAL_OK)
  {
	  //_Error_Handler(__FILE__, __LINE__);
  }

  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim1, &sClockSourceConfig) != HAL_OK)
  {
	  //_Error_Handler(__FILE__, __LINE__);
  }

  sSlaveConfig.SlaveMode = TIM_SLAVEMODE_TRIGGER;
  sSlaveConfig.InputTrigger = TIM_TS_ETRF;
  sSlaveConfig.TriggerPolarity = TIM_TRIGGERPOLARITY_NONINVERTED;
  sSlaveConfig.TriggerPrescaler = TIM_TRIGGERPRESCALER_DIV1;
  sSlaveConfig.TriggerFilter = 0;
  if (HAL_TIM_SlaveConfigSynchronization(&htim1, &sSlaveConfig) != HAL_OK)
  {
	  //_Error_Handler(__FILE__, __LINE__);
  }

  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterOutputTrigger2 = TIM_TRGO2_UPDATE;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_ENABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim1, &sMasterConfig) != HAL_OK)
  {
	  //_Error_Handler(__FILE__, __LINE__);
  }

}

/* TIM2 init function */
void MX_TIM2_Init(void)
{

	  TIM_ClockConfigTypeDef sClockSourceConfig;
	  TIM_SlaveConfigTypeDef sSlaveConfig;
	  TIM_MasterConfigTypeDef sMasterConfig;

	  htim2.Instance = TIM2;
	  htim2.Init.Prescaler = 100-1;//70-1;
	  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
      #if (NOMINAL_FREQ == 60)
	  htim2.Init.Period = 50000-1;
      #endif
	  #if (NOMINAL_FREQ == 50)
	  htim2.Init.Period = 20000-1;//30000-1;
	  #endif
	  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;
	  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
	  {
	    //_Error_Handler(__FILE__, __LINE__);
	  }

	  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
	  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
	  {
	    //_Error_Handler(__FILE__, __LINE__);
	  }

	  sSlaveConfig.SlaveMode = TIM_SLAVEMODE_TRIGGER;
	  sSlaveConfig.InputTrigger = TIM_TS_ETRF;
	  sSlaveConfig.TriggerPolarity = TIM_TRIGGERPOLARITY_NONINVERTED;
	  sSlaveConfig.TriggerPrescaler = TIM_TRIGGERPRESCALER_DIV1;
	  sSlaveConfig.TriggerFilter = 0;
	  if (HAL_TIM_SlaveConfigSynchronization(&htim2, &sSlaveConfig) != HAL_OK)
	  {
	    //_Error_Handler(__FILE__, __LINE__);
	  }

	  sMasterConfig.MasterOutputTrigger = TIM_TRGO_UPDATE;
	  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_ENABLE;
	  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
	  {
	    //_Error_Handler(__FILE__, __LINE__);
	  }

	  /* Enable the TIM Update interrupt */
	  //htim2.Instance->DIER |= 0x01;

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
		  //_Error_Handler(__FILE__, __LINE__);
	  }

}


unsigned int Get_ADC_Calib (void){
	return DR1;
}

/* ADC1 init function */
void MX_ADC1_Init(void)
{

  ADC_MultiModeTypeDef multimode;
  ADC_ChannelConfTypeDef sConfig;

    /**Configure the global features of the ADC (Clock, Resolution, Data Alignment and number of conversion)
    */
  hadc1.Instance = ADC1;
  hadc1.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV4;
  hadc1.Init.Resolution = ADC_RESOLUTION_12B;
  hadc1.Init.ScanConvMode = DISABLE;
  hadc1.Init.ContinuousConvMode = DISABLE;
  hadc1.Init.DiscontinuousConvMode = DISABLE;
  hadc1.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_RISING;
  hadc1.Init.ExternalTrigConv = ADC_EXTERNALTRIGCONV_T1_TRGO2;
  hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc1.Init.NbrOfConversion = 1;
  hadc1.Init.DMAContinuousRequests = ENABLE;
  hadc1.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  if (HAL_ADC_Init(&hadc1) != HAL_OK)
  {
	  //_Error_Handler(__FILE__, __LINE__);
  }

	/* Configure the DMA for ADC1*/
	/* Set the parameters to be configured */
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
	//hdma_adc1.Init.FIFOThreshold = DMA_FIFO_THRESHOLD_FULL;
	//hdma_adc1.Init.MemBurst = DMA_MBURST_SINGLE;
	//hdma_adc1.Init.PeriphBurst = DMA_PBURST_SINGLE;

	HAL_DMA_Init(&hdma_adc1);

	/* Associate the initialized DMA handle to the the UART handle */
	__HAL_LINKDMA(&hadc1, DMA_Handle, hdma_adc1);

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
	  //_Error_Handler(__FILE__, __LINE__);
  }

    /**Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
    */
  sConfig.Channel = ADC_CHANNEL_6;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_56CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
	  //_Error_Handler(__FILE__, __LINE__);
  }

}

/* ADC2 init function */
void MX_ADC2_Init(void)
{

  ADC_ChannelConfTypeDef sConfig;

    /**Configure the global features of the ADC (Clock, Resolution, Data Alignment and number of conversion)
    */
  hadc2.Instance = ADC2;
  hadc2.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV4;
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
	  //_Error_Handler(__FILE__, __LINE__);
  }

    /**Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
    */
  sConfig.Channel = ADC_CHANNEL_4;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_56CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc2, &sConfig) != HAL_OK)
  {
	  //_Error_Handler(__FILE__, __LINE__);
  }

}

/* ADC3 init function */
void MX_ADC3_Init(void)
{

  ADC_ChannelConfTypeDef sConfig;

    /**Configure the global features of the ADC (Clock, Resolution, Data Alignment and number of conversion)
    */
  hadc3.Instance = ADC3;
  hadc3.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV4;
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
	  //_Error_Handler(__FILE__, __LINE__);
  }

    /**Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
    */
  sConfig.Channel = ADC_CHANNEL_8;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_56CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc3, &sConfig) != HAL_OK)
  {
	  //_Error_Handler(__FILE__, __LINE__);
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

void vApplicationStackOverflowHook( TaskHandle_t xTask, char *pcTaskName ){
  while(1);
}


void vApplicationMallocFailedHook( void ){
  while(1);
}


#ifdef USE_FULL_ASSERT

/**
   * @brief Reports the name of the source file and the source line number
   * where the assert_param error has occurred.
   * @param file: pointer to the source file name
   * @param line: assert_param error line source number
   * @retval None
   */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
    ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */

}

#endif

/**
  * @}
  */ 

/**
  * @}
*/ 

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
