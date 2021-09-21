/*
 * serial.h
 *
 *  Created on: 28 de mar de 2018
 *      Author: Matheus K. Ferst
 */

#ifndef APPLICATION_USER_CORE_INC_SERIAL_H_
#define APPLICATION_USER_CORE_INC_SERIAL_H_

#include "FreeRTOS.h"
#include "queue.h"

typedef enum {INVALID_FD=-1, STDOUT=0, SERIAL, FD_NUM} file_descriptor_t;
extern xQueueHandle qUART[FD_NUM];

void UARTInit(void);
void UARTChangeBaudrate(file_descriptor_t fd, uint32_t baudrate);
//portBASE_TYPE UARTGetCharTimeout(file_descriptor_t fd, char *data, TickType_t timeout);
//portBASE_TYPE UARTGetChar(file_descriptor_t fd, char *data);
#define UARTGetCharTimeout(fd, data, timeout) xQueueReceive(qUART[(fd)], (data), (timeout))
#define UARTGetChar(fd, data) UARTGetCharTimeout((fd), (data), portMAX_DELAY)
char UARTPutChar(file_descriptor_t fd,char ucData);
void UARTPutString(file_descriptor_t fd, char *string, uint16_t size);


#endif /* APPLICATION_USER_CORE_INC_SERIAL_H_ */
