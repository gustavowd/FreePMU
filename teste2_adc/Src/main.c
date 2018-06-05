
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2018 STMicroelectronics International N.V. 
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
#include "cmsis_os.h"

/* USER CODE BEGIN Includes */
#include <math.h>
#include "stm32746g_discovery.h"

#define MCLOCK_FREQ 200000000
#define numero_pontos 256

volatile unsigned short adcBuffer[768];

///////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
//				ESTIMAÇÃO DOS DADOS DE INTERESSE
//
// Fasores trifasicos, frequencia e rocof
unsigned n=0, t_inicial=2;
unsigned int send_serial=0;
unsigned int i=1;
int j=0;
volatile unsigned int n_amostras=256;

unsigned int k=0;
unsigned int flag=0;
unsigned int r,s,t, rr, ss, tt;

//Tabela da DFT
float teta, seno[numero_pontos], cosseno[numero_pontos];
//aplicacao do fator de calibracao
float FC;
float FasesAC[numero_pontos*3];
float FasesAC_mod_R[numero_pontos], FasesAC_mod_S[numero_pontos], FasesAC_mod_T[numero_pontos];
float FasesAC_ReIm_R[numero_pontos*2], FasesAC_ReIm_S[numero_pontos*2], FasesAC_ReIm_T[numero_pontos*2];
//Aplicacao da DFT
float modulor,modulos,modulot,faser,fases,faset,somaMr,somaMs,somaMt,somaFr,somaFs,somaFt;
//Fasor em coordenadas retangulares
float Mr,Ms,Mt,Fr,Fs,Ft;
//Fasor em coordenadas polares
float Mag_R,Mag_S,Mag_T,Fase_R,Fase_S,Fase_T;
//Frequencia e rocof
float f0=60; // Freq nominal
int fps=30; //Fasor por segundo - metade da freq. nominal neste trabalho
float desvio_faseR, desvio_faseS, desvio_faseT, freq_R, freq_S, freq_T, Freq, ROCOF;
float Fase_R_ant, Fase_S_ant, Fase_T_ant, Freq_ant;
float desvio_ang_esp;
float tolerancia = 10;
//media movel do desvio de angulo
float vetor_desvioR[10], vetor_desvioS[10], vetor_desvioT[10];
float soma_r, soma_s, soma_t;
unsigned int d=0;
//Correçao da taxa de amostragem
float  dif, vetor_freq[10], media_freq, soma_freq, media_freq_2;
float vetor_rocof[10], media_rocof, soma_rocof;
unsigned int  f=0, g=0, contador = 0;
//Transmissao via serial
float buffer[9];

//Definicoes para correcao das medidas
float mag, faseR_x_mag, faseS_x_mag, faseT_x_mag, faseR_x_freq, faseS_x_freq, faseT_x_freq;
float MagR_x_mag, MagS_x_mag, MagT_x_mag, MagR_x_freq;

//Fasores finais
float Mag_R_final,Mag_S_final,Mag_T_final,Fase_R_final,Fase_S_final,Fase_T_final;
float Freq_final;

// Referencia uma estrutura para o semáforo que sincroniza a transmissão pela porta serial
osSemaphoreId  pmuSem_id;

//Outros
float x, y, z, w, a=0;
unsigned int Freq_int;

//////////////////////////////////////////
//           PARA SER CONFIGURADO  !!!!!!!!
// Faction of Second
unsigned long FracSec = 0x00000000;  // 40 000 us
// Time base
unsigned long Time_base = 0x000F4240;   // 1 000 000 us

///////////////////////////////////////////

union {
	float pf;
	unsigned char byte[4];
}convert_float_to_char;
/* USER CODE END Includes */

/* Private variables ---------------------------------------------------------*/
ADC_HandleTypeDef hadc1;
ADC_HandleTypeDef hadc2;
ADC_HandleTypeDef hadc3;
DMA_HandleTypeDef hdma_adc1;

TIM_HandleTypeDef htim8;

UART_HandleTypeDef huart1;
UART_HandleTypeDef huart6;

osThreadId PMU_TaskHandle;

/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_DMA_Init(void);
static void MX_ADC1_Init(void);
static void MX_TIM8_Init(void);
static void MX_ADC2_Init(void);
static void MX_ADC3_Init(void);
static void MX_USART1_UART_Init(void);
static void MX_USART6_UART_Init(void);
void PMUTask(void const * argument);

/* USER CODE BEGIN PFP */
/* Private function prototypes -----------------------------------------------*/

/* USER CODE END PFP */

/* USER CODE BEGIN 0 */
//Callback chamado quando o ADC finaliza a conversão
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc){
	  //Interrompe o timer1 e zera sua contagem atribuindo 0 ao Auto Reload Register
	  htim8.Instance->CR1 &= ~(TIM_CR1_CEN);
	  htim8.Instance->CNT = 0;

	  osSemaphoreRelease(pmuSem_id);

	  BSP_LED_Toggle(LED1);

}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  *
  * @retval None
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration----------------------------------------------------------*/

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
  MX_DMA_Init();
  MX_ADC1_Init();
  MX_TIM8_Init();
  MX_ADC2_Init();
  MX_ADC3_Init();
  MX_USART1_UART_Init();
  MX_USART6_UART_Init();
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
  /* definition and creation of PMU_Task */
  osThreadDef(PMU_Task, PMUTask, osPriorityNormal, 0, 1024);
  PMU_TaskHandle = osThreadCreate(osThread(PMU_Task), NULL);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */
 

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

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;
  RCC_PeriphCLKInitTypeDef PeriphClkInitStruct;

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
  RCC_OscInitStruct.PLL.PLLM = 12;
  RCC_OscInitStruct.PLL.PLLN = 192;
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

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_6) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

  PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_USART1|RCC_PERIPHCLK_USART6;
  PeriphClkInitStruct.Usart1ClockSelection = RCC_USART1CLKSOURCE_PCLK2;
  PeriphClkInitStruct.Usart6ClockSelection = RCC_USART6CLKSOURCE_PCLK2;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK)
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

/* ADC1 init function */
static void MX_ADC1_Init(void)
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
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the ADC multi-mode 
    */
  multimode.Mode = ADC_TRIPLEMODE_REGSIMULT;
  multimode.DMAAccessMode = ADC_DMAACCESSMODE_1;
  multimode.TwoSamplingDelay = ADC_TWOSAMPLINGDELAY_5CYCLES;
  if (HAL_ADCEx_MultiModeConfigChannel(&hadc1, &multimode) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time. 
    */
  sConfig.Channel = ADC_CHANNEL_0;
  sConfig.Rank = ADC_REGULAR_RANK_1;
  sConfig.SamplingTime = ADC_SAMPLETIME_480CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

}

/* ADC2 init function */
static void MX_ADC2_Init(void)
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
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time. 
    */
  sConfig.Channel = ADC_CHANNEL_4;
  sConfig.Rank = ADC_REGULAR_RANK_1;
  sConfig.SamplingTime = ADC_SAMPLETIME_480CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc2, &sConfig) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

}

/* ADC3 init function */
static void MX_ADC3_Init(void)
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
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time. 
    */
  sConfig.Channel = ADC_CHANNEL_4;
  sConfig.Rank = ADC_REGULAR_RANK_1;
  sConfig.SamplingTime = ADC_SAMPLETIME_480CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc3, &sConfig) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

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
  htim8.Init.Period = 13020;
  htim8.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim8.Init.RepetitionCounter = 0;
  htim8.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim8) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim8, &sClockSourceConfig) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

  sSlaveConfig.SlaveMode = TIM_SLAVEMODE_TRIGGER;
  sSlaveConfig.InputTrigger = TIM_TS_ETRF;
  sSlaveConfig.TriggerPolarity = TIM_TRIGGERPOLARITY_NONINVERTED;
  sSlaveConfig.TriggerPrescaler = TIM_TRIGGERPRESCALER_DIV1;
  sSlaveConfig.TriggerFilter = 0;
  if (HAL_TIM_SlaveConfigSynchronization(&htim8, &sSlaveConfig) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterOutputTrigger2 = TIM_TRGO2_UPDATE;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim8, &sMasterConfig) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

}

/* USART1 init function */
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

}

/* USART6 init function */
static void MX_USART6_UART_Init(void)
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
  huart6.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  if (HAL_UART_Init(&huart6) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

}

/** 
  * Enable DMA controller clock
  */
static void MX_DMA_Init(void) 
{
  /* DMA controller clock enable */
  __HAL_RCC_DMA2_CLK_ENABLE();

  /* DMA interrupt init */
  /* DMA2_Stream4_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA2_Stream4_IRQn, 5, 0);
  HAL_NVIC_EnableIRQ(DMA2_Stream4_IRQn);

}

/** Configure pins as 
        * Analog 
        * Input 
        * Output
        * EVENT_OUT
        * EXTI
*/
static void MX_GPIO_Init(void)
{

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOI_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/* PMUTask function */
void PMUTask(void const * argument)
{

  /* USER CODE BEGIN 5 */
	// Tabela da DFT
	teta=2*M_PI/n_amostras;

	for(k=0;k<n_amostras;k++){
		seno[k]=sin(k*teta);
		cosseno[k]=cos(k*teta);
	}

	//Carrega valores iniciais
	desvio_ang_esp = 0;  //desvio de ângulo esperado
	tolerancia = 6.5;    //tolerancia do desvio esperado
	Freq_ant = f0;

	//Calcula a fração de segundo (para etiqueta de tempo)
	if(f0 == 60){
		FracSec = 0x00008235;  //Fração de segundo 0,03333
	}else if(f0 == 50){
		FracSec = 0x00009C40;  // Fração de segundo = 0,04
	}

	// carrega vetores de media móvel
	for(i=0;i<10;i++){
		vetor_freq[i]=f0;
		vetor_rocof[i]=0;
	}

  osSemaphoreDef(SEM2);
  pmuSem_id = osSemaphoreCreate(osSemaphore(SEM2), 1);
  osSemaphoreWait(pmuSem_id, osWaitForever);

  BSP_LED_Init(LED1);
  MX_ADC1_Init();
  MX_ADC2_Init();
  MX_ADC3_Init();

  HAL_ADC_Start(&hadc3);
  HAL_ADC_Start(&hadc2);
  HAL_ADCEx_MultiModeStart_DMA(&hadc1, (uint32_t*)adcBuffer, 768);

  /* Infinite loop */
  for(;;)
  {
		// Espera completar as 768 amostras
	  	osSemaphoreWait(pmuSem_id, osWaitForever);

		// Aplica o fator de calibracao e carrega novo vetor (liberando o buffer)
		for(j=0;j<(n_amostras*3);j++){
		    FasesAC[j]=adcBuffer[j]*(float)0.0008056640625;//FC;//(3.0/4096);
		}

		send_serial = 0;


		r=0;
		s=1;
		t=2;

		somaMr=0;
		somaMs=0;
		somaMt=0;

		somaFr=0;
		somaFs=0;
		somaFt=0;


		//Aplicacao da DFT
		int k2 = 0;
		for (k=0;k<n_amostras;k++){

			modulor = FasesAC[r]*cosseno[k];
			modulos = FasesAC[s]*cosseno[k];
			modulot = FasesAC[t]*cosseno[k];

			//##############################
			// Para FFT
			FasesAC_ReIm_R[k2]=FasesAC[r];
			FasesAC_ReIm_S[k2]=FasesAC[s];
			FasesAC_ReIm_T[k2]=FasesAC[t];
			FasesAC_ReIm_R[k2+1]=0;
			FasesAC_ReIm_S[k2+1]=0;
			FasesAC_ReIm_T[k2+1]=0;

			k2 += 2;
			//##############################

			faser = FasesAC[r]*seno[k];
			fases = FasesAC[s]*seno[k];
			faset = FasesAC[t]*seno[k];

			somaMr += modulor;
			somaMs += modulos;
			somaMt += modulot;

			somaFr += faser;
			somaFs += fases;
			somaFt += faset;

			r +=3;
			s +=3;
			t +=3;
		}


		//Fasor em coordenadas retangulares
		Mr=somaMr*2/n_amostras;
		Ms=somaMs*2/n_amostras;
		Mt=somaMt*2/n_amostras;

		Fr=somaFr*2/n_amostras;
		Fs=somaFs*2/n_amostras;
		Ft=somaFt*2/n_amostras;

		//Fasor em coordenadas polares
		Mag_R = (sqrt((Mr*Mr)+(Fr*Fr)))/sqrt(2);
		Mag_S = (sqrt((Ms*Ms)+(Fs*Fs)))/sqrt(2);
		Mag_T = (sqrt((Mt*Mt)+(Ft*Ft)))/sqrt(2);

		Fase_R = (atan2(-Fr,Mr)*180/M_PI);
		Fase_S = (atan2(-Fs,Ms)*180/M_PI);
		Fase_T = (atan2(-Ft,Mt)*180/M_PI);

		//Desvio de fase (para estimacao de frequencia)
		desvio_faseR = (Fase_R-Fase_R_ant);
		desvio_faseS = (Fase_S-Fase_S_ant);
		desvio_faseT = (Fase_T-Fase_T_ant);


		Fase_R_ant = Fase_R;
		Fase_S_ant = Fase_S;
		Fase_T_ant = Fase_T;


		// Correcao da regiao de 180 graus para o desvio de fase
		if(desvio_faseR>270){
			desvio_faseR = desvio_faseR-360;
		}
		if(desvio_faseR<-270){
			desvio_faseR = desvio_faseR+360;
		}
		if(desvio_faseS>270){
			desvio_faseS = desvio_faseS-360;
		}
		if(desvio_faseS<-270){
			desvio_faseS = desvio_faseS+360;
		}
		if(desvio_faseT>270){
			desvio_faseT = desvio_faseT-360;
		}
		if(desvio_faseT<-270){
			desvio_faseT = desvio_faseT+360;
		}





		//FREQUENCIA E ROCOF FINAL (sem correcoes)
		//Calculo da freq para 30 pulsos e 3 fases

		freq_R = f0 + (desvio_faseR*fps)/360.0;
		freq_S = f0 + (desvio_faseS*fps)/360.0;
		freq_T = f0 + (desvio_faseT*fps)/360.0;



		Freq = (freq_R+freq_S+freq_T)/3.0;
		Freq = 60;


		if(f0 == 50){
			if(Freq > 55){
				Freq = 55;
			}else if(Freq < 45){
				Freq = 45;
			}
		}else if(f0 == 60){
			if(Freq > 65){
				Freq = 65;
			}else if(Freq < 55){
				Freq = 55;
			}
		}



		media_freq_2 = (Freq + Freq_ant)/2.0;

		//Desvio de ângulo esperado (para correção do phase shift)
		desvio_ang_esp = 360*(Freq-f0)/fps;


		ROCOF = (Freq - Freq_ant)*fps;

		Freq_ant = Freq;

		//media movel no valor final do rocof
		n=3;
		vetor_rocof[g] = ROCOF;
		g++;
		for(i=0;i<n;i++){
		    soma_rocof = soma_rocof + vetor_rocof[i];
		    media_rocof = soma_rocof/n;
		}
		soma_rocof = 0;
		if(g==n){
		    g=0;
		}


		// Media movel no valor final da frequencia
		vetor_freq[f] = Freq;
		f++;
		for(i=0;i<2;i++){
		    soma_freq = soma_freq + vetor_freq[i];
		    media_freq = soma_freq/2.0;
		}
		soma_freq = 0;
		if(f==2){
		    f=0;
		}

		Freq_final = media_freq; //+media_rocof/fps;



		// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! TESTES SEM SINAL
		media_freq = f0;  /////////////////// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

		//AJUSTE DA TAXA DE AMOSTRAGEM


		htim8.Instance->ARR = (float)MCLOCK_FREQ/((media_freq)*n_amostras);

		//APLICAÇÃO DAS CORREÇÕES (em magnitude e fase)

		//MAGNITUDE- ajuste da magnitude
		// Y-data = Magnitude reference - X-data = Magnitude measured (não em p.u.)


		mag = Mag_R;
		MagR_x_mag = (float)-0.0018945693 + (float)4.1062603119*mag;
		MagR_x_mag += (float)-0.0077128570*mag*mag;
		MagR_x_mag += (float)0.0262579711*mag*mag*mag;
		MagR_x_mag += (float)-0.0142115525*mag*mag*mag*mag;

		mag = Mag_S;
		MagS_x_mag = (float)-0.0018945693+(float)4.1062603119*mag;
		MagS_x_mag += (float)-0.0077128570*mag*mag;
		MagS_x_mag += (float)0.0262579711*mag*mag*mag;
		MagS_x_mag += (float)-0.0142115525*mag*mag*mag*mag;

		mag = Mag_T;
		MagT_x_mag = (float)-0.0018945693+(float)4.1062603119*mag;
		MagT_x_mag += (float)-0.0077128570*mag*mag;
		MagT_x_mag += (float)0.0262579711*mag*mag*mag;
		MagT_x_mag += (float)-0.0142115525*mag*mag*mag*mag;


		//FASE
		//correcao de fase em funcao da magnitude
		// Y-data = Phase deviation - X-data = Magnitude measured (não em p.u.)

		mag = MagR_x_mag;
		faseR_x_mag = (float)-1.2595979549+(float)0.4039280602*mag;
		faseR_x_mag += (float)-0.1010751752*mag*mag;
		faseR_x_mag += (float)0.0096132710*mag*mag*mag;

		mag = MagS_x_mag;
		faseS_x_mag = (float)-1.2595979549+(float)0.4039280602*mag;
		faseS_x_mag += (float)-0.1010751752*mag*mag;
		faseS_x_mag += (float)0.0096132710*mag*mag*mag;

		mag = MagT_x_mag;
		faseT_x_mag = (float)-1.2595979549+(float)0.4039280602*mag;
		faseT_x_mag += (float)-0.1010751752*mag*mag;
		faseT_x_mag += (float)0.0096132710*mag*mag*mag;

		// FREQUENCIA
		//correcao de fase em funcao da frequencia
		mag = media_freq;
		faseR_x_freq = (float)0.0237760101*mag-(float)1.1727874302;
		faseS_x_freq = (float)0.0237760101*mag-(float)1.1727874302;
		faseT_x_freq = (float)0.0237760101*mag-(float)1.1727874302;



		MagR_x_freq = mag*((float)-3.6463158287E-5)+(float)0.0011139213;
		MagR_x_freq = mag*((float)-3.6463158287E-5)+(float)0.0011139213;
		MagR_x_freq = mag*((float)-3.6463158287E-5)+(float)0.0011139213;


		// Calcula magnitude final
		// Ajustes da magnitude:
		// Sensor PRETO:
		Mag_R_final = MagR_x_mag * 64.727;
		Mag_S_final = MagS_x_mag * 65.105;
		Mag_T_final = MagT_x_mag * 64.596;


		//Calcula fase final (aplica as correcoes anteriores)
		Fase_R_final = Fase_R+faseR_x_mag+faseR_x_freq;
		Fase_S_final = Fase_S+faseS_x_mag+faseS_x_freq;
		Fase_T_final = Fase_T+faseT_x_mag+faseT_x_freq;


		// Correcao da regiao de 180 graus para a fase final
		if(Fase_R_final > 180.0){
			Fase_R_final = (Fase_R_final-360);
		}
		if(Fase_R_final <= -180.0){
			Fase_R_final = (Fase_R_final+360);
		}
		if(Fase_S_final>180.0){
			Fase_S_final = (Fase_S_final-360);
		}
		if(Fase_S_final<= -180.0){
			Fase_S_final = (Fase_S_final+360);
		}
		if(Fase_T_final>180.0){
			Fase_T_final = (Fase_T_final-360);
		}
		if(Fase_T_final<= -180.0){
			Fase_T_final = (Fase_T_final+360);
		}

		BSP_LED_Toggle(LED1);
  }
  /* USER CODE END 5 */ 
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  file: The file name as string.
  * @param  line: The line in file as a number.
  * @retval None
  */
void _Error_Handler(char *file, int line)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  while(1)
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
void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
