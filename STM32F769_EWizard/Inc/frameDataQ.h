/*
 * frameDataQ.h
 *
 *  Created on: 24 de jul de 2018
 *      Author: Leonardo
 */

#ifndef APPLICATION_INC_FRAMEDATAQ_H_
#define APPLICATION_INC_FRAMEDATAQ_H_

#include "main.h"
#include "FreeRTOS.h"

/******* Estruturas de dados e funcoes para a fila de ucData *******/
/* Elemento da fila. */
struct frameDataElement {
	#if (ENABLE_HARMONICS == 1)
	#if (OPENPDC_COMPATIBILITY == 1)
	unsigned char ucData[132];
	#else
	unsigned char ucData[320];
	#endif
	#else
	unsigned char ucData[128];
	#endif
	struct frameDataElement *next;
};

/* Fila em si.
 * ini: ponteiro inicio da fila
 * end: ponteiro fim da fila */
struct frameDataQueue {
	struct frameDataElement *ini, *end;
	uint16_t number_elements;
};

/* Cria um novo elemento. */
struct frameDataElement* newElement (unsigned char* newUcData, uint16_t size);

/* Cria uma fila vazia. */
struct frameDataQueue* createFDQueue ();

/* Enfila o elemento. */
void insertQueueElement (struct frameDataQueue* q, unsigned char* newUcData, uint16_t size);

/* Desenfila o elemento e retorna a struct. */
struct frameDataElement* removeQueueElement (struct frameDataQueue* q);

/* Verifica se a fila esta vazia. 1 caso sim, 0 caso contrario. */
int isQueueEmpty (struct frameDataQueue* q);

/* Funcao para trocar o SOC do ucData. Retorna int para dizer qtos elementos ha na fila. */
int changeSOC (struct frameDataQueue* q, unsigned long nSOC, uint16_t size);

#endif /* APPLICATION_INC_FRAMEDATAQ_H_ */
