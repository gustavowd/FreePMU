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
	unsigned char ucData[128];
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
struct frameDataElement* newElement (unsigned char* newUcData);

/* Cria uma fila vazia. */
struct frameDataQueue* createFDQueue ();

/* Enfila o elemento. */
void insertQueueElement (struct frameDataQueue* q, unsigned char* newUcData);

/* Desenfila o elemento e retorna a struct. */
struct frameDataElement* removeQueueElement (struct frameDataQueue* q);

/* Verifica se a fila esta vazia. 1 caso sim, 0 caso contrario. */
int isQueueEmpty (struct frameDataQueue* q);

/* Funcao para trocar o SOC do ucData. Retorna int para dizer qtos elementos ha na fila. */
int changeSOC (struct frameDataQueue* q, unsigned long nSOC);

#endif /* APPLICATION_INC_FRAMEDATAQ_H_ */
