/*
 * serial.c
 *
 *  Created on: 28 de mar de 2018
 *      Author: Matheus K. Ferst
 */

#include "serial.h"
#include "semphr.h"
#include "task.h"
#include "stm32f7xx_hal.h"
#include "stm32f7xx_hal_uart_ex.h"
#include "stm32f7xx_hal_gpio.h"

char rx_buff[FD_NUM] = {'\0'};
xQueueHandle qUART[FD_NUM] = {NULL};
xSemaphoreHandle sUART[FD_NUM] = {NULL};
xSemaphoreHandle mUART[FD_NUM] = {NULL};

UART_HandleTypeDef uart_handler[] = {
	{//STDOUT
		.Instance = USART1,
		.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT,
		.Init = {
			.BaudRate = 115200,
			.WordLength = UART_WORDLENGTH_8B,
			.StopBits = UART_STOPBITS_1,
			.Parity = UART_PARITY_NONE,
			.Mode = UART_MODE_TX_RX,
			.HwFlowCtl = UART_HWCONTROL_NONE,
			.OverSampling = UART_OVERSAMPLING_16,
			.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE
		}
	},
	{//SERIAL
		.Instance = USART6,
		.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT,
		.Init = {
			.BaudRate = 115200,
			.WordLength = UART_WORDLENGTH_8B,
			.StopBits = UART_STOPBITS_1,
			.Parity = UART_PARITY_NONE,
			.Mode = UART_MODE_TX_RX,
			.HwFlowCtl = UART_HWCONTROL_NONE,
			.OverSampling = UART_OVERSAMPLING_16,
			.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE
		}
	}
};

void UARTInit(void)
{
	char nothing;
	file_descriptor_t fd;

	if(sUART[0] != NULL)
		return;

	for(fd = 0; fd < FD_NUM; fd++) {
		sUART[fd] = xSemaphoreCreateBinary();
		if(sUART[fd] == NULL)
			while(1) vTaskDelay(portMAX_DELAY);	/*TODO: error handler*/

		mUART[fd] = xSemaphoreCreateMutex();
		if(mUART[fd] == NULL)
			while(1) vTaskDelay(portMAX_DELAY);	/*TODO: error handler*/

		qUART[fd] = xQueueCreate(128, sizeof(char));
		if(qUART[fd] == NULL)
			while(1) vTaskDelay(portMAX_DELAY);	/*TODO: error handler*/

		if(HAL_UART_DeInit(&uart_handler[fd]) != HAL_OK) {
			while(1) vTaskDelay(portMAX_DELAY);	/*TODO: error handler*/
		}

		if(HAL_UART_Init(&uart_handler[fd]) != HAL_OK) {
			while(1) vTaskDelay(portMAX_DELAY);	/*TODO: error handler*/
		}

		HAL_UART_Receive_IT(&uart_handler[fd], &rx_buff[fd], sizeof(rx_buff[fd]));
		xQueueReceive(qUART[fd], &nothing, 1);
		//SET_BIT(uart_handler[fd].Instance->CR3, USART_CR3_EIE);
		//SET_BIT(uart_handler[fd].Instance->CR1, USART_CR1_PEIE | USART_CR1_RXNEIE);
	}
}

void UARTChangeBaudrate(file_descriptor_t fd, uint32_t baudrate){
	char nothing;

    /* Disable the UART Parity Error Interrupt and RXNE interrupts */
    CLEAR_BIT(uart_handler[fd].Instance->CR1, (USART_CR1_RXNEIE | USART_CR1_PEIE));

    /* Disable the UART Error Interrupt: (Frame error, noise error, overrun error) */
    CLEAR_BIT(uart_handler[fd].Instance->CR3, USART_CR3_EIE);

	if(HAL_UART_DeInit(&uart_handler[fd]) != HAL_OK) {
		while(1){
			vTaskDelay(portMAX_DELAY);	/*TODO: error handler*/
		}
	}

	uart_handler[fd].Init.BaudRate = baudrate;
	if(HAL_UART_Init(&uart_handler[fd]) != HAL_OK) {
		while(1){
			vTaskDelay(portMAX_DELAY);	/*TODO: error handler*/
		}
	}

	HAL_UART_Receive_IT(&uart_handler[fd], &rx_buff[fd], sizeof(rx_buff[fd]));
	xQueueReceive(qUART[fd], &nothing, 1);
}

file_descriptor_t get_fd_from_instance(UART_HandleTypeDef* huart)
{
	file_descriptor_t i;

	for(i = 0; i < FD_NUM; i++) {
		if(uart_handler[i].Instance == huart->Instance) {
			return i;
		}
	}

	return INVALID_FD;
}

/* Fun��o chamada dentro da interrup��o de UART.
 * Copia dado recebido para uma fila.
 */
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	file_descriptor_t fd;
	BaseType_t pxHigherPriorityTaskWokenRX = pdFALSE;

	fd = get_fd_from_instance(huart);

	xQueueSendToBackFromISR(qUART[fd], &huart->Instance->RDR, &pxHigherPriorityTaskWokenRX);

	HAL_UART_Receive_IT(&uart_handler[fd], &rx_buff[fd], sizeof(rx_buff[fd]));

	if (pxHigherPriorityTaskWokenRX == pdTRUE){
		portYIELD();
	}
}


/* Fun��o chamada dentro da interrup��o de UART.
 * Informa que um pr�ximo caracter pode ser transmitido.
 */
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)
{
	BaseType_t pxHigherPriorityTaskWokenTX = pdFALSE;
	xSemaphoreGiveFromISR(sUART[get_fd_from_instance(huart)], &pxHigherPriorityTaskWokenTX);
	if (pxHigherPriorityTaskWokenTX == pdTRUE){
		portYIELD();
	}
}

/*
 * Fun��o para receber um caracter pela porta serial.
 */
//portBASE_TYPE UARTGetCharTimeout(file_descriptor_t fd, char *data, TickType_t timeout)
//{
//	return xQueueReceive(qUART[fd], data, timeout);
//	//HAL_UART_Receive_IT(&uart_handler[fd], &rx_buff[fd], sizeof(rx_buff[fd]));
//}

/*
 * Fun��o para transmitir um caracter pela porta serial.
 */
char UARTPutChar(file_descriptor_t fd, char ucData)
{
    // Adquire a porta serial
	if (mUART[fd] != NULL){
		if (xSemaphoreTake(mUART[fd], portMAX_DELAY) == pdTRUE){
			// Envia um caracter
			HAL_UART_Transmit_IT(&uart_handler[fd], (uint8_t *)&ucData,1);
			// Espera por uma interrup��o da UART
			xSemaphoreTake(sUART[fd], portMAX_DELAY);
			// Libera a porta serial
			xSemaphoreGive(mUART[fd]);
		}
	}
	return '\0';
}


/*
 * Fun��o para transmitir uma string pela porta serial.
 */
void UARTPutString(file_descriptor_t fd, char *string, uint16_t size)
{
	// Adquire a porta serial
	if (mUART[fd] != NULL){
		if (xSemaphoreTake(mUART[fd], portMAX_DELAY) == pdTRUE){
			// Descobre o tamanho da string, caso n�o informado
			if (!size){
				uint8_t *tmp = (uint8_t *)string;

				while(*tmp++){
					size++;
				}
			}

			/* Transmite uma sequencia de dados, com fluxo controlado pela interrup��o */
			HAL_UART_Transmit_IT(&uart_handler[fd], (uint8_t *)string, size);

			// Espera pelo fim da transmiss�o
			xSemaphoreTake(sUART[fd], portMAX_DELAY);

			xSemaphoreGive(mUART[fd]);
		}
	}
}
