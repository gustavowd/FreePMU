/**
  ******************************************************************************
  * @file    stm32f7xx_it.c
  * @author  MCD Application Team
  * @version V1.3.0
  * @date    30-December-2016  
  * @brief   Main Interrupt Service Routines.
  *          This file provides template for all exceptions handler and 
  *          peripherals interrupt service routine.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */ 

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f7xx_hal.h"

#include "stm32746g_discovery.h"
#include "stm32f7xx_it.h"

#if EW_USE_FREE_RTOS == 1
  #include "cmsis_os.h"
#endif

/* Extern function EwBspSystemTickIncrement increments the millisecond counter,
   which is used by the Runtime Environmet (RTE) to trigger timer events.
   It is assumed that the extern EmWiSystemTicks variable is incremented every
   millisecond by this timer driven interrupt service routine. */
extern void EwBspSystemTickIncrement( void );

 /** @addtogroup CORE
  * @{
  */

/** @defgroup 
  * @brief  
  * @{
  */
  
/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
extern ETH_HandleTypeDef             EthHandle;
extern HCD_HandleTypeDef             hhcd;
extern LTDC_HandleTypeDef            hltdc;  
extern SAI_HandleTypeDef             haudio_out_sai;
extern SAI_HandleTypeDef             haudio_in_sai;
extern QSPI_HandleTypeDef            QSPIHandle;
extern UART_HandleTypeDef 			 huart1;
extern UART_HandleTypeDef 			 huart6;
extern DMA_HandleTypeDef 			 hdma_adc1;
extern TIM_HandleTypeDef 			 htim1;

extern unsigned char ADC_UART_Flag;

extern osSemaphoreId  pmuSem_id;

/* Private function prototypes -----------------------------------------------*/
extern void xPortSysTickHandler(void);

/* Private functions ---------------------------------------------------------*/

/******************************************************************************/
/*            Cortex-M4 Processor Exceptions Handlers                         */
/******************************************************************************/

/**
  * @brief  This function handles NMI exception.
  * @param  None
  * @retval None
  */
void NMI_Handler(void)
{
}

/**
  * @brief  This function handles Hard Fault exception.
  * @param  None
  * @retval None
  */
void HardFault_Handler(void)
{
  /* Go to infinite loop when Hard Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Memory Manage exception.
  * @param  None
  * @retval None
  */
void MemManage_Handler(void)
{
  /* Go to infinite loop when Memory Manage exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Bus Fault exception.
  * @param  None
  * @retval None
  */
void BusFault_Handler(void)
{
  /* Go to infinite loop when Bus Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Usage Fault exception.
  * @param  None
  * @retval None
  */
void UsageFault_Handler(void)
{
  /* Go to infinite loop when Usage Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Debug Monitor exception.
  * @param  None
  * @retval None
  */
void DebugMon_Handler(void)
{
}

/**
  * @brief  This function handles SysTick Handler.
  * @param  None
  * @retval None
  */
void SysTick_Handler(void)
{
	HAL_IncTick();
	EwBspSystemTickIncrement();

	#if EW_USE_FREE_RTOS == 1
		osSystickHandler();
	#endif

	if (xTaskGetSchedulerState() != taskSCHEDULER_NOT_STARTED)
	{
		xPortSysTickHandler();
	}
}

/******************************************************************************/
/*                 STM32F7xx Peripherals Interrupt Handlers                   */
/*  Add here the Interrupt Handler for the used peripheral(s) (PPP), for the  */
/*  available peripheral interrupt handler's name please refer to the startup */
/*  file (startup_stm32f7xx.s).                                               */
/******************************************************************************/

/**
  * @brief  This function handles USB-On-The-Go HS global interrupt request.
  * @param  None
  * @retval None
  */
void OTG_HS_IRQHandler(void)
{
  HAL_HCD_IRQHandler(&hhcd);
}

/**
  * @brief  This function handles External lines 9_5 interrupt request.
  * @param  None
  * @retval None
  */
void EXTI9_5_IRQHandler(void)
{
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_8); 
}

   /**
  * @brief  This function handles DMA2 Stream 5 interrupt request.
  * @param  None
  * @retval None
  *//*
void DMA2_Stream4_IRQHandler(void)
{
  HAL_DMA_IRQHandler(haudio_out_sai.hdmatx);
}
*/


/**
  * @brief This function handles DMA2 Stream 7 interrupt request.
  * @param None
  * @retval None
  */
void AUDIO_IN_SAIx_DMAx_IRQHandler(void)
{
  HAL_DMA_IRQHandler(haudio_in_sai.hdmarx);
}
/**
  * @brief  This function handles DMA2 Stream 5 interrupt request.
  * @param  None
  * @retval None
  */
void QUADSPI_IRQHandler(void)
{
  HAL_QSPI_IRQHandler(&QSPIHandle);
}


/**
  * @brief  This function handles Ethernet interrupt request.
  * @param  None
  * @retval None
  */
void ETH_IRQHandler(void)
{
  HAL_ETH_IRQHandler(&EthHandle);
}

void USART1_IRQHandler(void)
{
  /* USER CODE BEGIN USART2_IRQn 0 */

  /* USER CODE END USART2_IRQn 0 */
  HAL_UART_IRQHandler(&huart1);
  /* USER CODE BEGIN USART2_IRQn 1 */

  /* USER CODE END USART2_IRQn 1 */
}

/**
* @brief This function handles USART6 global interrupt.
*/
void USART6_IRQHandler(void)
{
  /* USER CODE BEGIN USART6_IRQn 0 */

  /* USER CODE END USART6_IRQn 0 */
  HAL_UART_IRQHandler(&huart6);
  /* USER CODE BEGIN USART6_IRQn 1 */

  /* USER CODE END USART6_IRQn 1 */
}

/**
* @brief This function handles DMA2 stream4 global interrupt, currently mapped to service adc1.
*/
void DMA2_Stream4_IRQHandler(void)
{
  /* USER CODE BEGIN DMA2_Stream0_IRQn 0 */
	  HAL_DMA_IRQHandler(&hdma_adc1);
	  //Interrompe o timer1 e zera sua contagem atribuindo 0 ao Auto Reload Register
	  HAL_TIM_Base_Stop(&htim1);
	  htim1.Instance->CNT = 0;

	  osSemaphoreRelease(pmuSem_id);

	  //ADC_UART_Flag = 1;
  /* USER CODE END DMA2_Stream0_IRQn 1 */
}



/**
  * @}
  */

    
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
