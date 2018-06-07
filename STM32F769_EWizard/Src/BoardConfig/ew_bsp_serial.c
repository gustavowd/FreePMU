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
*   This file is part of the interface (glue layer) between an Embedded Wizard
*   generated UI application and the board support package (BSP) of a dedicated
*   target.
*   This template is responsible to establish a serial connection in order
*   to send debug messages to a PC terminal tool, or to receive key events
*   for the UI application.
*
*******************************************************************************/

#include "stm32f7xx_hal.h"
#include "stm32f7xx_hal_gpio.h"
#include "stm32f769i_discovery.h"

#include "ew_bsp_serial.h"
#include "FreeRTOS.h"
#include "semphr.h"

#define UART_PORTID                     USART1

#define USARTx_CLK_ENABLE()             __HAL_RCC_USART1_CLK_ENABLE();
#define USARTx_RX_GPIO_CLK_ENABLE()     __HAL_RCC_GPIOA_CLK_ENABLE()
#define USARTx_TX_GPIO_CLK_ENABLE()     __HAL_RCC_GPIOA_CLK_ENABLE()

#define USARTx_FORCE_RESET()            __HAL_RCC_USART1_FORCE_RESET()
#define USARTx_RELEASE_RESET()          __HAL_RCC_USART1_RELEASE_RESET()

#define USARTx_TX_PIN                   GPIO_PIN_9
#define USARTx_TX_GPIO_PORT             GPIOA
#define USARTx_TX_AF                    GPIO_AF7_USART1
#define USARTx_RX_PIN                   GPIO_PIN_10
#define USARTx_RX_GPIO_PORT             GPIOA
#define USARTx_RX_AF                    GPIO_AF7_USART1


UART_HandleTypeDef                      UART_Handle;

#if 0
void HAL_UART_MspInit(UART_HandleTypeDef *huart)
{
  GPIO_InitTypeDef  GPIO_InitStruct;

  /*##-1- Enable peripherals and GPIO Clocks #################################*/
  /* Enable GPIO TX/RX clock */
  USARTx_TX_GPIO_CLK_ENABLE();
  USARTx_RX_GPIO_CLK_ENABLE();

  /* Enable USART1 clock */
  USARTx_CLK_ENABLE();

  /*##-2- Configure peripheral GPIO ##########################################*/
  /* UART TX GPIO pin configuration  */
  GPIO_InitStruct.Pin       = USARTx_TX_PIN;
  GPIO_InitStruct.Mode      = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull      = GPIO_PULLUP;
  GPIO_InitStruct.Speed     = GPIO_SPEED_FAST;
  GPIO_InitStruct.Alternate = USARTx_TX_AF;

  HAL_GPIO_Init(USARTx_TX_GPIO_PORT, &GPIO_InitStruct);

  /* UART RX GPIO pin configuration  */
  GPIO_InitStruct.Pin       = USARTx_RX_PIN;
  GPIO_InitStruct.Alternate = USARTx_RX_AF;

  HAL_GPIO_Init(USARTx_RX_GPIO_PORT, &GPIO_InitStruct);
}


void HAL_UART_MspDeInit(UART_HandleTypeDef *huart)
{
  /*##-1- Reset peripherals ##################################################*/
  USARTx_FORCE_RESET();
  USARTx_RELEASE_RESET();

  /*##-2- Disable peripherals and GPIO Clocks #################################*/
  /* Configure UART Tx as alternate function  */
  HAL_GPIO_DeInit(USARTx_TX_GPIO_PORT, USARTx_TX_PIN);
  /* Configure UART Rx as alternate function  */
  HAL_GPIO_DeInit(USARTx_RX_GPIO_PORT, USARTx_RX_PIN);
}
#endif

/*******************************************************************************
* FUNCTION:
*   EwBspConfigSerial
*
* DESCRIPTION:
*   The function EwBspConfigSerial initializes a serial connection via UART/USART
*   interface used to print error and trace messages from an Embedded Wizard
*   GUI application.
*   This implementation uses the following configuration:
*   - BaudRate = 115200 baud
*   - Word Length = 8 Bits
*   - One Stop Bit
*   - No parity
*   - Hardware flow control disabled (RTS and CTS signals)
*   - Receive and transmit enabled
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
xSemaphoreHandle semtx;
void EwBspConfigSerial( void )
{
  UART_Handle.Instance            = UART_PORTID;
  UART_Handle.Init.BaudRate       = 115200;
  UART_Handle.Init.WordLength     = UART_WORDLENGTH_8B;
  UART_Handle.Init.StopBits       = UART_STOPBITS_1;
  UART_Handle.Init.Parity         = UART_PARITY_NONE;
  UART_Handle.Init.Mode           = UART_MODE_TX_RX;
  UART_Handle.Init.HwFlowCtl      = UART_HWCONTROL_NONE;
  UART_Handle.Init.OverSampling   = UART_OVERSAMPLING_16;

  HAL_UART_Init( &UART_Handle );

  semtx = xSemaphoreCreateBinary();
}


/*******************************************************************************
* FUNCTION:
*   EwBspPutCharacter
*
* DESCRIPTION:
*   The function EwBspPutCharacter sends the given character to the serial
*   interface.
*
* ARGUMENTS:
*   aCharacter - The character to be send via the serial interface.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspPutCharacter( unsigned char aCharacter )
{
  HAL_UART_Transmit( &UART_Handle, (uint8_t*)&aCharacter, 1, 10 );
}

/*******************************************************************************
* FUNCTION:
*   EwBspGetCharacter
*
* DESCRIPTION:
*   The function EwBspGetCharacter returns the current character from the serial
*   interface. If no character is available within the input buffer, 0 is
*   returned.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   Current character from serial input buffer or 0.
*
*******************************************************************************/
unsigned char EwBspGetCharacter( void )
{
  uint8_t ret;
  HAL_UART_Receive( &UART_Handle, &ret, 1, 10 );
  return ret;
}



/* Fun��o chamada dentro da interrup��o de UART.
 * Informa que um pr�ximo caracter pode ser transmitido.
 */
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)
{
	BaseType_t pxHigherPriorityTaskWokenTX = pdFALSE;
	if(huart->Instance == USART1){
		xSemaphoreGiveFromISR(semtx, &pxHigherPriorityTaskWokenTX);
		if (pxHigherPriorityTaskWokenTX == pdTRUE){
			portYIELD();
		}
	}
}



/*
 * Fun��o para transmitir um caracter pela porta serial.
 */
uint8_t ucData = 0;
void UARTPutChar(char ucData)
{
		// Envia um caracter
		HAL_UART_Transmit_IT(&UART_Handle, (uint8_t *)&ucData,1);
		// Espera por uma interrup��o da UART
		xSemaphoreTake(semtx, portMAX_DELAY);
}


/*
 * Fun��o para transmitir uma string pela porta serial.
 */
void UARTPutString(char *string, uint16_t size)
{
		// Descobre o tamanho da string, caso n�o informado
		if (!size){
			uint8_t *tmp = (uint8_t *)string;

			while(*tmp++){
				size++;
			}
		}

		/* Transmite uma sequencia de dados, com fluxo controlado pela interrup��o */
		HAL_UART_Transmit_IT(&UART_Handle, (uint8_t *)string, size);

		// Espera pelo fim da transmiss�o
		xSemaphoreTake(semtx, portMAX_DELAY);
}


/* msy */
