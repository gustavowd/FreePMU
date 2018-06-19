/**
  ******************************************************************************
  * File Name          : stm32f7xx_hal_msp.c
  * Description        : This file provides code for the MSP Initialization 
  *                      and de-Initialization codes.
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
#include "stm32f7xx_hal.h"

extern DMA_HandleTypeDef hdma_adc1;

extern void _Error_Handler(char *, int);
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */
/**
  * Initializes the Global MSP.
  */
void HAL_MspInit(void)
{
  /* USER CODE BEGIN MspInit 0 */

  /* USER CODE END MspInit 0 */

  HAL_NVIC_SetPriorityGrouping(NVIC_PRIORITYGROUP_4);

  /* System interrupt init*/
  /* MemoryManagement_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(MemoryManagement_IRQn, 0, 0);
  /* BusFault_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(BusFault_IRQn, 0, 0);
  /* UsageFault_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(UsageFault_IRQn, 0, 0);
  /* SVCall_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(SVCall_IRQn, 0, 0);
  /* DebugMonitor_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DebugMonitor_IRQn, 0, 0);
  /* PendSV_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(PendSV_IRQn, 15, 0);
  /* SysTick_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(SysTick_IRQn, 15, 0);

  /* USER CODE BEGIN MspInit 1 */

  /* USER CODE END MspInit 1 */
}

/* USER CODE BEGIN 1 */
void HAL_UART_MspInit(UART_HandleTypeDef* huart)
{

  GPIO_InitTypeDef GPIO_InitStruct;
  if(huart->Instance==USART1)
    {
    /* USER CODE BEGIN USART1_MspInit 0 */

    /* USER CODE END USART1_MspInit 0 */
      /* Peripheral clock enable */
      __HAL_RCC_USART1_CLK_ENABLE();

      /**USART1 GPIO Configuration
      PB7     ------> USART1_RX
      PA9     ------> USART1_TX
      */
      GPIO_InitStruct.Pin = GPIO_PIN_7;
      GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
      GPIO_InitStruct.Pull = GPIO_PULLUP;
      GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
      GPIO_InitStruct.Alternate = GPIO_AF7_USART1;
      HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

      GPIO_InitStruct.Pin = GPIO_PIN_9;
      GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
      GPIO_InitStruct.Pull = GPIO_PULLUP;
      GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
      GPIO_InitStruct.Alternate = GPIO_AF7_USART1;
      HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

      /* Peripheral interrupt init */
      HAL_NVIC_SetPriority(USART1_IRQn, 0x5, 0);
      HAL_NVIC_EnableIRQ(USART1_IRQn);

    /* USER CODE BEGIN USART1_MspInit 1 */

    /* USER CODE END USART1_MspInit 1 */
  }

  if(huart->Instance==USART6)
    {
	  /* USER CODE BEGIN USART6_MspInit 0 */

	    /* USER CODE END USART6_MspInit 0 */
	      /* Peripheral clock enable */
	      __HAL_RCC_USART6_CLK_ENABLE();

	      /**USART6 GPIO Configuration
	      PC7     ------> USART6_RX
	      PC6     ------> USART6_TX
	      */
	      GPIO_InitStruct.Pin = GPIO_PIN_7|GPIO_PIN_6;
	      GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
	      GPIO_InitStruct.Pull = GPIO_PULLUP;
	      GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
	      GPIO_InitStruct.Alternate = GPIO_AF8_USART6;
	      HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

	      /* USART6 interrupt Init */
	      HAL_NVIC_SetPriority(USART6_IRQn, 5, 0);
	      HAL_NVIC_EnableIRQ(USART6_IRQn);
	    /* USER CODE BEGIN USART6_MspInit 1 */

	    /* USER CODE END USART6_MspInit 1 */
    }

}

void HAL_UART_MspDeInit(UART_HandleTypeDef* huart)
{

	if(huart->Instance==USART1)
	  {
	  /* USER CODE BEGIN USART1_MspDeInit 0 */

	  /* USER CODE END USART1_MspDeInit 0 */
	    /* Peripheral clock disable */
	    __HAL_RCC_USART1_CLK_DISABLE();

	    /**USART1 GPIO Configuration
	    PB7     ------> USART1_RX
	    PA9     ------> USART1_TX
	    */
	    HAL_GPIO_DeInit(GPIOB, GPIO_PIN_7);

	    HAL_GPIO_DeInit(GPIOA, GPIO_PIN_9);

	}

	if(huart->Instance==USART6)
	  {
		/* USER CODE BEGIN USART6_MspDeInit 0 */

		  /* USER CODE END USART6_MspDeInit 0 */
		    /* Peripheral clock disable */
		    __HAL_RCC_USART6_CLK_DISABLE();

		    /**USART6 GPIO Configuration
		    PC7     ------> USART6_RX
		    PC6     ------> USART6_TX
		    */
		    HAL_GPIO_DeInit(GPIOC, GPIO_PIN_7|GPIO_PIN_6);

		    /* USART6 interrupt DeInit */
		    HAL_NVIC_DisableIRQ(USART6_IRQn);
		  /* USER CODE BEGIN USART6_MspDeInit 1 */

		  /* USER CODE END USART6_MspDeInit 1 */
	  }

}

void HAL_ADC_MspInit(ADC_HandleTypeDef* hadc)
{

	  GPIO_InitTypeDef GPIO_InitStruct;
	  if(hadc->Instance==ADC1)
	  {
	  /* USER CODE BEGIN ADC1_MspInit 0 */

	  /* USER CODE END ADC1_MspInit 0 */
	    /* Peripheral clock enable */
	    __HAL_RCC_ADC1_CLK_ENABLE();

	    /**ADC1 GPIO Configuration
	    PA0/WKUP     ------> ADC1_IN0
	    */
	    GPIO_InitStruct.Pin = GPIO_PIN_0;
	    GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
	    GPIO_InitStruct.Pull = GPIO_NOPULL;
	    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

	  /* USER CODE BEGIN ADC1_MspInit 1 */

	  /* USER CODE END ADC1_MspInit 1 */
	  }
	  else if(hadc->Instance==ADC2)
	  {
	  /* USER CODE BEGIN ADC2_MspInit 0 */

	  /* USER CODE END ADC2_MspInit 0 */
	    /* Peripheral clock enable */
	    __HAL_RCC_ADC2_CLK_ENABLE();

	    /**ADC2 GPIO Configuration
	    PA4     ------> ADC2_IN4
	    */
	    GPIO_InitStruct.Pin = GPIO_PIN_4;
	    GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
	    GPIO_InitStruct.Pull = GPIO_NOPULL;
	    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

	  /* USER CODE BEGIN ADC2_MspInit 1 */

	  /* USER CODE END ADC2_MspInit 1 */
	  }
	  else if(hadc->Instance==ADC3)
	  {
	  /* USER CODE BEGIN ADC3_MspInit 0 */

	  /* USER CODE END ADC3_MspInit 0 */
	    /* Peripheral clock enable */
	    __HAL_RCC_ADC3_CLK_ENABLE();

	    /**ADC3 GPIO Configuration
	    PF6     ------> ADC3_IN4
	    */
	    GPIO_InitStruct.Pin = GPIO_PIN_6;
	    GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
	    GPIO_InitStruct.Pull = GPIO_NOPULL;
	    HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

	  /* USER CODE BEGIN ADC3_MspInit 1 */

	  /* USER CODE END ADC3_MspInit 1 */
	  }

}

void HAL_ADC_MspDeInit(ADC_HandleTypeDef* hadc)
{

	  if(hadc->Instance==ADC1)
	  {
	  /* USER CODE BEGIN ADC1_MspDeInit 0 */

	  /* USER CODE END ADC1_MspDeInit 0 */
	    /* Peripheral clock disable */
	    __HAL_RCC_ADC1_CLK_DISABLE();

	    /**ADC1 GPIO Configuration
	    PA0/WKUP     ------> ADC1_IN0
	    */
	    HAL_GPIO_DeInit(GPIOA, GPIO_PIN_0);

	    /* Peripheral DMA DeInit*/
	    //HAL_DMA_DeInit(hadc->DMA_Handle);
	  /* USER CODE BEGIN ADC1_MspDeInit 1 */

	  /* USER CODE END ADC1_MspDeInit 1 */
	  }
	  else if(hadc->Instance==ADC2)
	  {
	  /* USER CODE BEGIN ADC2_MspDeInit 0 */

	  /* USER CODE END ADC2_MspDeInit 0 */
	    /* Peripheral clock disable */
	    __HAL_RCC_ADC2_CLK_DISABLE();

	    /**ADC2 GPIO Configuration
	    PA4     ------> ADC2_IN4
	    */
	    HAL_GPIO_DeInit(GPIOA, GPIO_PIN_4);

	  /* USER CODE BEGIN ADC2_MspDeInit 1 */

	  /* USER CODE END ADC2_MspDeInit 1 */
	  }
	  else if(hadc->Instance==ADC3)
	  {
	  /* USER CODE BEGIN ADC3_MspDeInit 0 */

	  /* USER CODE END ADC3_MspDeInit 0 */
	    /* Peripheral clock disable */
	    __HAL_RCC_ADC3_CLK_DISABLE();

	    /**ADC3 GPIO Configuration
	    PF6     ------> ADC3_IN4
	    */
	    HAL_GPIO_DeInit(GPIOF, GPIO_PIN_6);

	  /* USER CODE BEGIN ADC3_MspDeInit 1 */

	  /* USER CODE END ADC3_MspDeInit 1 */
	  }

}

void HAL_TIM_Base_MspInit(TIM_HandleTypeDef* htim_base)
{

  GPIO_InitTypeDef GPIO_InitStruct;
  if(htim_base->Instance==TIM2)
  {
  /* USER CODE BEGIN TIM2_MspInit 0 */

  /* USER CODE END TIM2_MspInit 0 */
    /* Peripheral clock enable */
    __HAL_RCC_TIM2_CLK_ENABLE();
  /* USER CODE BEGIN TIM2_MspInit 1 */

  /* USER CODE END TIM2_MspInit 1 */
  }
  else if(htim_base->Instance==TIM8)
  {
  /* USER CODE BEGIN TIM8_MspInit 0 */

  /* USER CODE END TIM8_MspInit 0 */
    /* Peripheral clock enable */
    __HAL_RCC_TIM8_CLK_ENABLE();

    /**TIM8 GPIO Configuration
    PI3     ------> TIM8_ETR
    */
    GPIO_InitStruct.Pin = GPIO_PIN_3;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF3_TIM8;
    HAL_GPIO_Init(GPIOI, &GPIO_InitStruct);

  /* USER CODE BEGIN TIM8_MspInit 1 */

  /* USER CODE END TIM8_MspInit 1 */
  }

}

void HAL_TIM_Base_MspDeInit(TIM_HandleTypeDef* htim_base)
{

  if(htim_base->Instance==TIM2)
  {
  /* USER CODE BEGIN TIM2_MspDeInit 0 */

  /* USER CODE END TIM2_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_TIM2_CLK_DISABLE();
  /* USER CODE BEGIN TIM2_MspDeInit 1 */

  /* USER CODE END TIM2_MspDeInit 1 */
  }
  else if(htim_base->Instance==TIM8)
  {
  /* USER CODE BEGIN TIM8_MspDeInit 0 */

  /* USER CODE END TIM8_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_TIM8_CLK_DISABLE();

    /**TIM8 GPIO Configuration
    PI3     ------> TIM8_ETR
    */
    HAL_GPIO_DeInit(GPIOI, GPIO_PIN_3);

  /* USER CODE BEGIN TIM8_MspDeInit 1 */

  /* USER CODE END TIM8_MspDeInit 1 */
  }

}

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
