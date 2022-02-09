/* ------------------------ BRTOS includes ----------------------------- */
#include "main.h"

/* ------------------------ lwIP includes --------------------------------- */
#include "lwip/api.h"
#include "lwip/tcpip.h"
#include "lwip/sockets.h"
#include "lwip/tcp.h"
#include "lwip/udp.h"
#include "lwip/ip.h"
#include "lwip/memp.h"
#include "lwip/stats.h"

#include "lwip/mem.h"
#include "lwip/udp.h"
#include "netif/etharp.h"
#include "lwip/dhcp.h"
#include "lwip/sys.h"

/* ------------------------ Project includes ------------------------------ */
#include <string.h>
#include <stdio.h>
#include "frameDataQ.h"

#include "GUI/gui.h"
#include "print_server.h"
/* ------------------------ IEEE C37118 includes --------------------------- */
#define TCP_PORT 4712
#define UDP_PORT 4713

#define A_SYNC_AA 0xAA
#define A_SYNC_DATA 0x01
#define A_SYNC_HDR 0x11
#define A_SYNC_CFG1 0x21
#define A_SYNC_CFG2 0x31
#define A_SYNC_CFG3 0x51
#define A_SYNC_CMD 0x41

unsigned char cmd;
volatile unsigned char connected=0;
#if (ENABLE_HARMONICS == 1)
extern unsigned char ucData[832];
#else
extern unsigned char ucData[128];
#endif
extern int frame_data(uint16_t *size);
extern int frame_config(uint8_t config);
extern int frame_header(void);
osMutexId ethMut_id;
volatile int first_connection = 0;
volatile unsigned char data_flag=0;
volatile uint32_t Server_State = SERVER_DOWN;
#if TRANSPORT_PROTOCOL == UDP_PMU
struct sockaddr_in cli_addr;
#endif

#define SERVER_VERBOSE 1

//void SERVER_StatusMessage (const char *message);

osMutexDef(ethMut);
volatile int sockfd, newsockfd;
void pmu_tcp_server(void *argument)
{
	int clilen;
#if TRANSPORT_PROTOCOL == TCP_PMU
	struct sockaddr_in serv_addr, cli_addr;
#else
	struct sockaddr_in serv_addr;
#endif
	int n;
	unsigned char buffer[1024];

	int nbytes;


	/* Parameters are not used - suppress compiler error. */
    //LWIP_UNUSED_ARG(pvParameters);

    ethMut_id = osMutexNew(NULL);

#if TRANSPORT_PROTOCOL == TCP_PMU
reboot_server:
    /* First call to socket() function */
#if SERVER_VERBOSE == 1
	//UARTPutString(STDOUT, "Starting server...\n\r",0);
	xMessageBufferSend(xMessageBuffer, "Starting server...\n\r", strlen("Starting server...\n\r")+1, portMAX_DELAY);
#endif
	sockfd = lwip_socket(AF_INET, SOCK_STREAM, 0);
	int on = 1;
	if (sockfd < 0) {
		//erro
#if SERVER_VERBOSE == 1
		//UARTPutString(STDOUT, "Error creating socket!\n\r",0);
		xMessageBufferSend(xMessageBuffer, "Error creating socket!\n\r", strlen("Error creating socket!\n\r")+1, portMAX_DELAY);
#endif
		Server_State = SOCKET_ERROR;
		server_set_status(Server_State);
		osDelay(5000);
		goto reboot_server;
	}

	int status = lwip_setsockopt(sockfd, SOL_SOCKET,SO_REUSEADDR, (const char *) &on, sizeof(on));
	(void)status;
	const struct timeval timeout = { 0, 300000 }; /* 300 milliseconds timeout */
	status = lwip_setsockopt(sockfd,SOL_SOCKET,SO_SNDTIMEO, (const char *) &timeout,sizeof(timeout));
	(void)status;

	/* Initialize socket structure */
	/* set up address to connect to */
	bzero((char *) &serv_addr, sizeof(serv_addr));
	serv_addr.sin_len = sizeof(serv_addr);
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = PP_HTONS(TCP_PORT);
	serv_addr.sin_addr.s_addr = INADDR_ANY;

	/* Now bind the host address using bind() call.*/
	if (lwip_bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0){
		//erro
		lwip_close(sockfd);
#if SERVER_VERBOSE == 1
		//UARTPutString(STDOUT, "Error binding socket!\n\r",0);
		xMessageBufferSend(xMessageBuffer, "Error binding socket!\n\r", strlen("Error binding socket!\n\r")+1, portMAX_DELAY);
#endif
		Server_State = BIND_ERROR;
		server_set_status(Server_State);
		osDelay(5000);
		goto reboot_server;
	}
	/* Now start listening for the clients, here
	 * process will go in sleep mode and will wait
	 * for the incoming connection
	 */
	if ( lwip_listen(sockfd, 5) != 0 ){
		lwip_close(sockfd);
#if SERVER_VERBOSE == 1
		//UARTPutString(STDOUT, "Error listening on port 4712!\n\r",0);
		xMessageBufferSend(xMessageBuffer, "Error listening on port 4712!\n\r", strlen("Error listening on port 4712!\n\r")+1, portMAX_DELAY);
#endif
		Server_State = LISTEN_ERROR;
		server_set_status(Server_State);
		osDelay(5000);
		goto reboot_server;
	}

	clilen = sizeof(cli_addr);

#if SERVER_VERBOSE == 1
	//UARTPutString(STDOUT, "Listening on port 4712.\n\r",0);
	xMessageBufferSend(xMessageBuffer, "Listening on port 4712.\n\r", strlen("Listening on port 4712.\n\r")+1, portMAX_DELAY);
#endif
	Server_State = LISTENING;
	server_set_status(Server_State);

	 // While true
	while (1){


		// Accept all requests
		newsockfd = lwip_accept(sockfd, (struct sockaddr *) &cli_addr, (socklen_t*)&clilen);
		if (newsockfd < 0){
			//erro
			lwip_close(sockfd);
#if SERVER_VERBOSE == 1
			//UARTPutString(STDOUT, "Accept error!\n\r",0);
			xMessageBufferSend(xMessageBuffer, "Accept error!\n\r", strlen("Accept error!\n\r")+1, portMAX_DELAY);
#endif
			Server_State = ACCEPT_ERROR;
			server_set_status(Server_State);
			osDelay(5000);
			goto reboot_server;
		}

		connected = 1;
		const struct timeval timeout = { 0, 300000 }; /* 300 milliseconds timeout */
		status = lwip_setsockopt(newsockfd,SOL_SOCKET,SO_SNDTIMEO, (const char *) &timeout,sizeof(timeout));
		(void)status;
		const struct timeval timeout2 = { 5, 0 }; /* 5 second timeout */
		status = lwip_setsockopt(newsockfd,SOL_SOCKET,SO_RCVTIMEO, (const char *) &timeout2,sizeof(timeout2));
		(void)status;
		while(1){

			bzero(buffer,1024);
			n = lwip_read(newsockfd,buffer,1024);
			osMutexWait(ethMut_id,portMAX_DELAY);
			if (n < 0){
				//erro
				if (connected == 0){
					osMutexRelease(ethMut_id);
#if SERVER_VERBOSE == 1
					//UARTPutString(STDOUT, "Error reading data!\n\r",0);
					xMessageBufferSend(xMessageBuffer, "Error reading data!\n\r", strlen("Error reading data!\n\r")+1, portMAX_DELAY);
					//UARTPutString(STDOUT, "Disconnected from the PDC!\n\r",0);
					xMessageBufferSend(xMessageBuffer, "Disconnected from the PDC!\n\r", strlen("Disconnected from the PDC!\n\r")+1, portMAX_DELAY);
#endif
					goto reboot_server;
				}else{
					osMutexRelease(ethMut_id);
				}
			}else{
				if (n == 0){
					if (data_flag){
						data_flag = 0;
					}
					close(newsockfd);
					connected = 0;
					first_connection = 0;
					osMutexRelease(ethMut_id);
					Server_State = LISTENING;
					server_set_status(Server_State);
					break;
				}else
				{
					// processa o pacote recebido
					if(buffer[0] == A_SYNC_AA){

						if(buffer[1] == A_SYNC_CMD){

							switch(buffer[15]){

								case 0x01:  //Desliga transmissao
									if (data_flag == 1){
										data_flag = 0;
#if SERVER_VERBOSE == 1
										//UARTPutString(STDOUT, "Disconnected from the PDC!\n\r",0);
										xMessageBufferSend(xMessageBuffer, "Disconnected from the PDC!\n\r", strlen("Disconnected from the PDC!\n\r")+1, portMAX_DELAY);
#endif
									}
									data_flag = 0;
									break;

								case 0x02: // Liga transmissao
									data_flag = 1;
									first_connection = 1;
									break;

								case 0x03: // Envia frame de cabecalho
									nbytes = frame_header();
									lwip_send(newsockfd, ucData, nbytes, 0);
									break;

								case 0x04: // Envia frame de cofiguracao 1
									nbytes = frame_config(A_SYNC_CFG1);
									lwip_send(newsockfd, ucData, nbytes, 0);
									break;

								case 0x05: // Envia frame de cofiguracao 2
									nbytes = frame_config(A_SYNC_CFG2);
									lwip_send(newsockfd, ucData, nbytes, 0);
#if SERVER_VERBOSE == 1
									//UARTPutString(STDOUT, "Connected to the PDC!\n\r",0);
									xMessageBufferSend(xMessageBuffer, "Connected to the PDC!\n\r", strlen("Connected to the PDC!\n\r")+1, portMAX_DELAY);
#endif
									Server_State = PDC_CONNECTED;
									server_set_status(Server_State);
									break;

									default:
										// pacote desconhecido
									break;
								}


						}else{
							// pacote desconhecido
							break;
						}

					}
					osMutexRelease(ethMut_id);
				}
			}
		}
	} /* end of while */
#endif
#if TRANSPORT_PROTOCOL == UDP_PMU
	/* First call to socket() function */
	sockfd = lwip_socket(AF_INET, SOCK_DGRAM, 0);
	//int on = 1;
	if (sockfd < 0) {
		//erro
		//SERVER_StatusMessage ("Erro no servidor");
		Server_State = SOCKET_ERROR;
		while(1){
			osDelay(1000);
		}
	}

	//int status = lwip_setsockopt(sockfd, SOL_SOCKET,SO_REUSEADDR, (const char *) &on, sizeof(on));
	//(void)status;

	/* Initialize socket structure */
	/* set up address to connect to */
	bzero((char *) &serv_addr, sizeof(serv_addr));
	serv_addr.sin_len = sizeof(serv_addr);
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = PP_HTONS(TCP_PORT);
	serv_addr.sin_addr.s_addr = INADDR_ANY;

    /*Destination*/
	bzero((char *) &cli_addr, sizeof(cli_addr));
	cli_addr.sin_family = AF_INET;
	cli_addr.sin_len = sizeof(cli_addr);
	cli_addr.sin_addr.s_addr = htonl(INADDR_BROADCAST);
	cli_addr.sin_port = PP_HTONS(UDP_PORT);

	/* Now bind the host address using bind() call.*/
	if (lwip_bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0){
		//erro
		lwip_close(sockfd);
		while(1){
			//SERVER_StatusMessage ("Erro no servidor");
			Server_State = BIND_ERROR;
			osDelay(1000);
		}
	}

	//SERVER_StatusMessage ("Broadcasting na porta 4713");
	Server_State = UDP_BROADCASTING;
	escutando = 1;
	connected = 1;

	while(1){

		bzero(buffer,1024);
		osMutexWait(ethMut_id,osWaitForever);

		// Envia frame de cofiguracao 2
		nbytes = frame_config(A_SYNC_CFG2);
		lwip_sendto(sockfd, ucData, nbytes, 0, (struct sockaddr *)&cli_addr, sizeof(cli_addr));

		// Liga transmissao
		data_flag = 1;

		osMutexRelease(ethMut_id);
		vTaskDelay(10000);
	}
#endif
}


osSemaphoreId syncSem_id;
osSemaphoreDef(syncSem);
char isSyncCreated = 0;

extern struct frameDataQueue* qUcData;
extern volatile int frame_cnt;
extern volatile uint8_t newSOC;

void pmu_tcp_server_out(void *argument)
{
	int nbytes;
	ssize_t transmitted = 0;

	/* Parameters are not used - suppress compiler error. */
    //LWIP_UNUSED_ARG(pvParameters);

    syncSem_id = osSemaphoreNew(1U, 0U, NULL);
    isSyncCreated = 1;
	while(1){
		osSemaphoreAcquire(syncSem_id, osWaitForever);
		osMutexWait(ethMut_id,portMAX_DELAY);
		if (first_connection){
			if ((frame_cnt == 1) && (newSOC == 1)){
				first_connection = 0;
			}
		}

		if((connected == 1) && (first_connection == 0)){
			uint16_t size = 0;
			nbytes = frame_data(&size);
			osMutexRelease(ethMut_id);

			/*Nao ha elementos na fila, ha apenas um ucData, que deve ser enviado*/
			if ((nbytes == 1) && (isQueueEmpty(qUcData) == 1)) {
				// Os data frames aparentam ter sempre 50 bytes de tamanho
				osMutexWait(ethMut_id,portMAX_DELAY);
				#if TRANSPORT_PROTOCOL == TCP_PMU
				uint32_t tmpcnt = 0;
				do{
					transmitted = lwip_send(newsockfd, ucData, size, 0);
					if (transmitted != size){
						tmpcnt++;
#if SERVER_VERBOSE == 1
						//UARTPutString(STDOUT, "Transmission error!\n\r",0);
						char tmpbuffer[36];
						sprintf(tmpbuffer, "Transmission error, errno: %d\n\r", errno);
						xMessageBufferSend(xMessageBuffer, tmpbuffer, strlen(tmpbuffer)+1, portMAX_DELAY);
#endif
						if (tmpcnt >=3){
							//erro
							close(newsockfd);
							close(sockfd);
							data_flag = 0;
							connected = 0;
							first_connection = 0;
							break;
						}
					}
				}while(transmitted != size);
				#endif
				#if TRANSPORT_PROTOCOL == UDP_PMU
				lwip_sendto(newsockfd, ucData, size, 0, (struct sockaddr *)&cli_addr, sizeof(cli_addr));
				#endif
				osMutexRelease(ethMut_id);
			// Caso contrario, envia-se a fila toda
			} else if (nbytes > 1) {
#if SERVER_VERBOSE == 1
				char tmpbuffer[32];
				sprintf(tmpbuffer, "Used queue: %d\n\r", qUcData->number_elements);
				//UARTPutString(STDOUT, tmpbuffer,0);
				xMessageBufferSend(xMessageBuffer, tmpbuffer, strlen(tmpbuffer)+1, portMAX_DELAY);
#endif
				struct frameDataElement* temp = removeQueueElement(qUcData);
				while (temp != NULL) {
					osMutexWait(ethMut_id,portMAX_DELAY);
					#if TRANSPORT_PROTOCOL == TCP_PMU
					uint32_t tmpcnt = 0;
					do{
						transmitted = lwip_send(newsockfd, temp->ucData, size, 0);
						if (transmitted != size){
							tmpcnt++;
#if SERVER_VERBOSE == 1
							//UARTPutString(STDOUT, "Transmission error!\n\r",0);
							char tmpbuffer[36];
							sprintf(tmpbuffer, "Transmission error, errno: %d\n\r", errno);
							xMessageBufferSend(xMessageBuffer, tmpbuffer, strlen(tmpbuffer)+1, portMAX_DELAY);
#endif
							if (tmpcnt >=3){
								//erro
								close(newsockfd);
								close(sockfd);
								data_flag = 0;
								connected = 0;
								first_connection = 0;
								break;
							}
						}
					}while(transmitted != size);
					if (tmpcnt >=3){
						osMutexRelease(ethMut_id);
						while (temp != NULL) {
							vPortFree(temp);
							temp = removeQueueElement(qUcData);
						}
						break;
					}
					#endif
					#if TRANSPORT_PROTOCOL == UDP_PMU
					lwip_sendto(newsockfd, ucData, size, 0, (struct sockaddr *)&cli_addr, sizeof(cli_addr));
					#endif
					osMutexRelease(ethMut_id);
					vPortFree(temp);
					temp = removeQueueElement(qUcData);
				}
			}
		}else{
			osMutexRelease(ethMut_id);
			if (qUcData != NULL){
				// Se não está conectado e tem itens na fila, esvazia a fila
				if (isQueueEmpty(qUcData) == 0){
					struct frameDataElement* temp = removeQueueElement(qUcData);
					while (temp != NULL) {
						vPortFree(temp);
						temp = removeQueueElement(qUcData);
					}
				}
			}
		}
	}
}


uint32_t Server_GetState(void){
	return Server_State;
}
