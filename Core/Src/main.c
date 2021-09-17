/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stm32f7xx.h"
#include "stm32f769i_discovery.h"
#include "hal_stm_lvgl/tft/tft.h"
#include "hal_stm_lvgl/touchpad/touchpad.h"
#include "lvgl/lvgl.h"
//#include "lvgl/examples/lv_examples.h"
//#include "lv_demos/lv_demo.h"
#include "GUI/gui.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */
RTC_DateTypeDef				DataDef;
RTC_DateTypeDef				Data;
RTC_TimeTypeDef				HorarioDef;
RTC_TimeTypeDef				Horario;
/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* Definitions for defaultTask */
osThreadId_t guiTaskHandle;
const osThreadAttr_t guiTask_attributes = {
  .name = "GUITask",
  .stack_size = 1024 * 3,
  .priority = (osPriority_t) osPriorityLow,
};
/* USER CODE BEGIN PV */
osThreadId_t dhcpTaskHandle;
const osThreadAttr_t dhcpTask_attributes = {
  .name = "DHCPTask",
  .stack_size = 1280,
  .priority = (osPriority_t) osPriorityNormal4,
};

osThreadId_t loginTaskHandle;
const osThreadAttr_t loginTask_attributes = {
  .name = "LoginTask",
  .stack_size = 5 * 256,
  .priority = (osPriority_t) osPriorityNormal,
};

osThreadId_t pmuTaskHandle;
const osThreadAttr_t pmuTask_attributes = {
  .name = "PMUTask",
  .stack_size = 2048,
  .priority = (osPriority_t) osPriorityRealtime,
};

osThreadId_t gpsTaskHandle;
const osThreadAttr_t gpsTask_attributes = {
  .name = "GPSTask",
  .stack_size = 2048,
  .priority = (osPriority_t) osPriorityHigh,
};

#define MEDIA_CALIB_POWER2 7
// Numero de Amostras sera 2^MEDIA_CALIB_POWER2
#define MEDIA_CALIB_SIZE (1<<MEDIA_CALIB_POWER2)

/********************* VARIÁVEIS **********************/

ADC_HandleTypeDef hadc1;
ADC_HandleTypeDef hadc2;
ADC_HandleTypeDef hadc3;

DMA_HandleTypeDef hdma_adc1;

TIM_HandleTypeDef htim1;
TIM_HandleTypeDef htim8;
#if (SIMULATED_GPS == 1)
TIM_HandleTypeDef htim12;
#endif

osMessageQId SerialGPSq;

unsigned int DR1 = 0;

unsigned char TIM8_UART_Flag = 0, ADC_UART_Flag = 0;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
void GUITask(void *argument);

/* USER CODE BEGIN PFP */
RNG_HandleTypeDef RngHandle;
void DHCP_Thread(void *argument);
void SSL_Client(void *argument);
void PMU_Task(void *argument);
void GPS_Task(void *argument);
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
static void MX_DMA_Init(void);
static void MX_ADCalibration_Init(void);
#ifdef PPS_30_HZ
static void MX_TIM1_Init(void);
#else
static void MX_TIM1_Init(void);
static void MX_TIM8_Init(void);
#endif
#if (SIMULATED_GPS == 1)
static void MX_TIM12_Init(void);
#endif

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
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* Enable I-Cache---------------------------------------------------------*/
  SCB_EnableICache();

  /* Enable D-Cache---------------------------------------------------------*/
  SCB_EnableDCache();

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */
  RNG_Init();

  MX_ADCalibration_Init();
  MX_DMA_Init();
  #ifdef PPS_30_HZ
  MX_TIM1_Init();
  #else
  MX_TIM1_Init();
  MX_TIM8_Init();
  #endif
  #if (SIMULATED_GPS == 1)
  MX_TIM12_Init();
  #endif
  RNG_Init();
  BSP_LED_Init(LED1);
  BSP_LED_Init(LED2);
  BSP_LED_Toggle(LED1);

  //Configura data e hora inicial
  DataDef.Date=18;
  DataDef.Month=11;
  DataDef.Year=19;

  HorarioDef.Hours=12;			//Horario RTC
  HorarioDef.Minutes=0;
  HorarioDef.Seconds=0;

  /* Enable Back up SRAM */
  __HAL_RCC_BKPSRAM_CLK_ENABLE();

  /* Initialize RTC */
  k_CalendarBkupInit();
  k_SetTime(&HorarioDef);
  k_SetDate(&DataDef);
  /* USER CODE END 2 */

  /* Init scheduler */
  osKernelInitialize();

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of GUITask */
  guiTaskHandle = osThreadNew(GUITask, NULL, &guiTask_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* DHCP Client: Wait cable connection and ask for IP address */
  dhcpTaskHandle = osThreadNew(DHCP_Thread, NULL, &dhcpTask_attributes);

  /* Login / Status Task: */
  loginTaskHandle = osThreadNew(SSL_Client, NULL, &loginTask_attributes);

  /* PMU Task: */
  pmuTaskHandle = osThreadNew(PMU_Task, NULL, &pmuTask_attributes);

  /* GPS Task: */
  gpsTaskHandle = osThreadNew(GPS_Task, NULL, &gpsTask_attributes);
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

  /* Start scheduler */
  osKernelStart();

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

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 25;
  RCC_OscInitStruct.PLL.PLLN = 432;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 9;
  RCC_OscInitStruct.PLL.PLLR = 7;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Activate the Over-Drive mode
  */
  if (HAL_PWREx_EnableOverDrive() != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{

	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOC_CLK_ENABLE();
	__HAL_RCC_GPIOH_CLK_ENABLE();
	__HAL_RCC_GPIOF_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOI_CLK_ENABLE();
    __HAL_RCC_GPIOJ_CLK_ENABLE();


    GPIO_InitTypeDef  gpio_init_structure;

    /* Configure the GPIO_LED pin */
    gpio_init_structure.Pin   = GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_9;
    gpio_init_structure.Mode  = GPIO_MODE_OUTPUT_PP;
    gpio_init_structure.Pull  = GPIO_NOPULL;
    gpio_init_structure.Speed = GPIO_SPEED_HIGH;

    HAL_GPIO_Init(GPIOF, &gpio_init_structure);

    /*PJ1 is enable GPS chip*/
    gpio_init_structure.Pin   = GPIO_PIN_1;
    gpio_init_structure.Mode  = GPIO_MODE_OUTPUT_PP;
    gpio_init_structure.Pull  = GPIO_NOPULL;
    gpio_init_structure.Speed = GPIO_SPEED_HIGH;

    HAL_GPIO_Init(GPIOJ, &gpio_init_structure);

    HAL_GPIO_WritePin(GPIOJ, GPIO_PIN_1, GPIO_PIN_RESET);

}

/* USER CODE BEGIN 4 */
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


#ifdef PPS_30_HZ


/*TIM1 Init Function*/
static void MX_TIM1_Init(void){

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
  if (HAL_TIM_Base_Init(&htim1) != HAL_OK){
	  Error_Handler();
  }

  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim1, &sClockSourceConfig) != HAL_OK){
	  Error_Handler();
  }

  sSlaveConfig.SlaveMode = TIM_SLAVEMODE_TRIGGER;
  sSlaveConfig.InputTrigger = TIM_TS_ETRF;
  sSlaveConfig.TriggerPolarity = TIM_TRIGGERPOLARITY_NONINVERTED;
  sSlaveConfig.TriggerPrescaler = TIM_TRIGGERPRESCALER_DIV1;
  sSlaveConfig.TriggerFilter = 0;
  if (HAL_TIM_SlaveConfigSynchronization(&htim1, &sSlaveConfig) != HAL_OK){
	  Error_Handler();
  }

  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterOutputTrigger2 = TIM_TRGO2_UPDATE;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_ENABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim1, &sMasterConfig) != HAL_OK){
	  Error_Handler();
  }
}

#else

/* Periférico        ucon  -    kit     GPS
 * TIM1_ETR          PA12       D13     PPS
 * TIM8_ETR          PA0        BT      PPS (apenas versão 1 PPS)
 * USART6-TX         PC6        D1      RX
 * USART6-RX         PC7        D0      TX
 * Enable GPS        PJ1        D2      Alimentação
 * ADC-Fase R        PA6        A0      -
 * ADC-Fase S        PA4        A1      -
 * ADC-Fase T        PF10       A3      -
 * */
/*TIM8 Init Function*/
static void MX_TIM8_Init(void)
{
  TIM_ClockConfigTypeDef sClockSourceConfig;
  TIM_SlaveConfigTypeDef sSlaveConfig;
  TIM_MasterConfigTypeDef sMasterConfig;

  htim8.Instance = TIM8;
  htim8.Init.Prescaler = 0;
  htim8.Init.CounterMode = TIM_COUNTERMODE_UP;
  #if (NOMINAL_FREQ == 60)
  #if (OVERSAMPLING  == 1)
  htim8.Init.Period = 1708; //60 Hz - //1708 - 8x; //3417 - 4x;//13671 - 1x;
  #else
  htim8.Init.Period = 13671; //60 Hz - //1708 - 8x; //3417 - 4x;//13671 - 1x;
  #endif
  #endif
  #if (NOMINAL_FREQ == 50)
  #if (OVERSAMPLING  == 1)
  htim8.Init.Period = 1953; //50 Hz - //1953 - 8x; //3906 - 4x;//15625 - 1x;
  #else
  htim8.Init.Period = 15625-1;//50 Hz - //1953 - 8x; //3906 - 4x;//15625 - 1x;
  #endif
  #endif
  htim8.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim8.Init.RepetitionCounter = 0;
  htim8.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;
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
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_ENABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim8, &sMasterConfig) != HAL_OK)
  {
	  Error_Handler();
  }

}

/* TIM1 init function */
void MX_TIM1_Init(void)
{

	  TIM_ClockConfigTypeDef sClockSourceConfig;
	  TIM_SlaveConfigTypeDef sSlaveConfig;
	  TIM_MasterConfigTypeDef sMasterConfig;

	  htim1.Instance = TIM1;
	  htim1.Init.CounterMode = TIM_COUNTERMODE_UP;
      #if (NOMINAL_FREQ == 60)
	  htim1.Init.Prescaler = 55-1;
	  htim1.Init.Period = 63636- (CORR_HTIM1);
      #endif
	  #if (NOMINAL_FREQ == 50)
	  htim1.Init.Prescaler = 100-1;
	  htim1.Init.Period = 20000-1;
	  #endif
	  htim1.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	  htim1.Init.RepetitionCounter = 0;
	  htim1.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;
	  if (HAL_TIM_Base_Init(&htim1) != HAL_OK)
	  {
		  Error_Handler();
	  }

	  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
	  if (HAL_TIM_ConfigClockSource(&htim1, &sClockSourceConfig) != HAL_OK)
	  {
		  Error_Handler();
	  }

	  sSlaveConfig.SlaveMode = TIM_SLAVEMODE_TRIGGER;
	  sSlaveConfig.InputTrigger = TIM_TS_ETRF;
	  sSlaveConfig.TriggerPolarity = TIM_TRIGGERPOLARITY_NONINVERTED;
	  sSlaveConfig.TriggerPrescaler = TIM_TRIGGERPRESCALER_DIV1;
	  sSlaveConfig.TriggerFilter = 0;
	  if (HAL_TIM_SlaveConfigSynchronization(&htim1, &sSlaveConfig) != HAL_OK)
	  {
		  Error_Handler();
	  }

	  sMasterConfig.MasterOutputTrigger = TIM_TRGO_UPDATE;
	  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_ENABLE;
	  if (HAL_TIMEx_MasterConfigSynchronization(&htim1, &sMasterConfig) != HAL_OK)
	  {
		  Error_Handler();
	  }

	  /* Enable the TIM Update interrupt */
	  //htim8.Instance->DIER |= 0x01;

}
#endif

#if (SIMULATED_GPS == 1)
/**
  * @brief TIM12 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM12_Init(void)
{

  /* USER CODE BEGIN TIM12_Init 0 */

  /* USER CODE END TIM12_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_OC_InitTypeDef sConfigOC = {0};

  /* USER CODE BEGIN TIM12_Init 1 */

  /* USER CODE END TIM12_Init 1 */
  htim12.Instance = TIM12;
  htim12.Init.Prescaler = 99;
  htim12.Init.CounterMode = TIM_COUNTERMODE_UP;
#if (NOMINAL_FREQ == 60)
  htim12.Init.Period = 34999;
#else
  htim12.Init.Period = 41999;
#endif
  htim12.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim12.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;
  if (HAL_TIM_Base_Init(&htim12) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim12, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_Init(&htim12) != HAL_OK)
  {
    Error_Handler();
  }
  sConfigOC.OCMode = TIM_OCMODE_PWM1;
#if (NOMINAL_FREQ == 60)
  sConfigOC.Pulse = 17499;
#else
  sConfigOC.Pulse = 20999;
#endif
  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
  if (HAL_TIM_PWM_ConfigChannel(&htim12, &sConfigOC, TIM_CHANNEL_1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM12_Init 2 */

  /* USER CODE END TIM12_Init 2 */
}
#endif

#if 0
void MX_USART6_UART_Init(void)
{


	  huart6.Instance = USART6;
	  huart6.Init.BaudRate = GPS_BAUDRATE;
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

}
#endif


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
#ifdef PPS_30_HZ
  hadc1.Init.ExternalTrigConv = ADC_EXTERNALTRIGCONV_T1_TRGO2;
#else
  hadc1.Init.ExternalTrigConv = ADC_EXTERNALTRIGCONV_T8_TRGO2;
#endif
  hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc1.Init.NbrOfConversion = 1;
  hadc1.Init.DMAContinuousRequests = ENABLE;
  hadc1.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  if (HAL_ADC_Init(&hadc1) != HAL_OK)
  {
	  Error_Handler();
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
	  Error_Handler();
  }

    /**Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
    */
  sConfig.Channel = ADC_CHANNEL_6;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_56CYCLES;
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
	  Error_Handler();
  }

    /**Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
    */
  sConfig.Channel = ADC_CHANNEL_4;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_56CYCLES;
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
	  Error_Handler();
  }

    /**Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
    */
  sConfig.Channel = ADC_CHANNEL_8;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_56CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc3, &sConfig) != HAL_OK)
  {
	  Error_Handler();
  }

}
/* USER CODE END 4 */

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
void GUITask(void *argument)
{
  /* USER CODE BEGIN 5 */
	lv_init();

	tft_init();
	touchpad_init();

	lv_init_widgets();

	while(1) {
		if (xSemaphoreTake(GUI_mutex, portMAX_DELAY) == pdTRUE){
			lv_task_handler();
			xSemaphoreGive(GUI_mutex);
		}
		vTaskDelay(5);
	}
  /* USER CODE END 5 */
}

/**
  * @brief  Period elapsed callback in non blocking mode
  * @note   This function is called  when TIM2 interrupt took place, inside
  * HAL_TIM_IRQHandler(). It makes a direct call to HAL_IncTick() to increment
  * a global variable "uwTick" used as application time base.
  * @param  htim : TIM handle
  * @retval None
  */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  /* USER CODE BEGIN Callback 0 */

  /* USER CODE END Callback 0 */
  if (htim->Instance == TIM2) {
    HAL_IncTick();
  }
  /* USER CODE BEGIN Callback 1 */
  lv_tick_inc(1);
  /* USER CODE END Callback 1 */
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
