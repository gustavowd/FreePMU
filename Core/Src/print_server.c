/*
 * print_server.c
 *
 *  Created on: 6 de fev de 2022
 *      Author: gustavo
 */

#include "print_server.h"
#include "serial.h"

MessageBufferHandle_t xMessageBuffer;


void Print_Task(void *param){
	char buffer[768];
	size_t qtd = 0;
	while(1)
	{
		qtd = xMessageBufferReceive(xMessageBuffer, (void *)buffer, sizeof(buffer) - 1, portMAX_DELAY);
		UARTPutString(STDOUT, buffer,qtd);
	}
}

