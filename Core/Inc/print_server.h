/*
 * print_server.h
 *
 *  Created on: 6 de fev de 2022
 *      Author: gustavo
 */

#ifndef INC_PRINT_SERVER_H_
#define INC_PRINT_SERVER_H_

#include "FreeRTOS.h"
#include "task.h"
#include "stream_buffer.h"
#include "message_buffer.h"

extern MessageBufferHandle_t xMessageBuffer;


void Print_Task(void *param);




#endif /* INC_PRINT_SERVER_H_ */
