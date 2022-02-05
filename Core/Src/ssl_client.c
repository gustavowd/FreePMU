 /** 
  *
  *  Portions COPYRIGHT 2016 STMicroelectronics
  *  Copyright (C) 2006-2015, ARM Limited, All Rights Reserved
  *
  ******************************************************************************
  * @file    ssl_client.c 
  * @author  MCD Application Team
  * @version V1.2.1
  * @date    14-April-2017
  * @brief   SSL client application 
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2017 STMicroelectronics</center></h2>
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

#if !defined(MBEDTLS_CONFIG_FILE)
#include "mbedtls/config.h"
#else
#include MBEDTLS_CONFIG_FILE
#endif

#if defined(MBEDTLS_PLATFORM_C)
#include "mbedtls/platform.h"
#else
#include <stdio.h>
#include <stdlib.h>
#define mbedtls_time       time 
#define mbedtls_time_t     time_t
#define mbedtls_fprintf    fprintf
#define mbedtls_printf     printf
#endif

#if !defined(MBEDTLS_BIGNUM_C) || !defined(MBEDTLS_ENTROPY_C) ||  \
    !defined(MBEDTLS_SSL_TLS_C) || !defined(MBEDTLS_SSL_CLI_C) || \
    !defined(MBEDTLS_NET_C) || !defined(MBEDTLS_RSA_C) ||         \
    !defined(MBEDTLS_CERTS_C) || !defined(MBEDTLS_PEM_PARSE_C) || \
    !defined(MBEDTLS_CTR_DRBG_C) || !defined(MBEDTLS_X509_CRT_PARSE_C)
int main( void )
{
  mbedtls_printf("MBEDTLS_BIGNUM_C and/or MBEDTLS_ENTROPY_C and/or "
                 "MBEDTLS_SSL_TLS_C and/or MBEDTLS_SSL_CLI_C and/or "
                 "MBEDTLS_NET_C and/or MBEDTLS_RSA_C and/or "
                 "MBEDTLS_CTR_DRBG_C and/or MBEDTLS_X509_CRT_PARSE_C "
                 "not defined.\n");
  return( 0 );
}
#else

#include "mbedtls/net_sockets.h"
#include "mbedtls/debug.h"
#include "mbedtls/ssl.h"
#include "mbedtls/entropy.h"
#include "mbedtls/ctr_drbg.h"
#include "mbedtls/error.h"
#include "mbedtls/certs.h"
#include "mbedtls/memory_buffer_alloc.h"

#include "main.h"
#include "cmsis_os.h"
#include "lwip/netdb.h"
#include "lwip/apps/sntp.h"
#include "dhcp_client.h"
#include "tls_client_utils.h"

#include <string.h>
#include "stm32f7xx_hal.h"
#include "stm32f7xx_hal_uart_ex.h"
#include "stm32f7xx_hal_gpio.h"
#include "task.h"
#include "printf_lib.h"

#include "lwip/init.h"
#include "mbedtls/version.h"

#define UTFPR_AUTH		0

#define AUTH_SERVER "intranet.pb.utfpr.edu.br"
#define AUTH_PORT 443
#define AUTH_SERVER_LOOKUP_RETRIES 5
#define AUTH_USER "embarcados-pb"
#define AUTH_PASS "Utfpr@1107"
#define AUTH_DATA "dst=&popup=true&username=" AUTH_USER "&password=" AUTH_PASS "\r\n"
#define AUTH_DATA_LEN "58"  // sizeof(AUTH_DATA)
#define AUTH_REQUEST "POST /login HTTP/1.1\r\nHost: " AUTH_SERVER "\r\nUser-Agent: OMG/rainbows!!!\r\nAccept: */*\r\nContent-Length: " AUTH_DATA_LEN "\r\nContent-Type: application/x-www-form-urlencoded\r\n\r\n" AUTH_DATA "\r\n"

struct tls_client cli;
static uint8_t buf[1024];

extern void pmu_tcp_server(void *argument);
extern void pmu_tcp_server_out(void *argument);

osThreadId_t tcpTaskHandle;
const osThreadAttr_t tcpTask_attributes = {
  .name = "ServerTask",
  .stack_size = 3072,
  .priority = (osPriority_t) osPriorityNormal3,
};

osThreadId_t tcpoutTaskHandle;
const osThreadAttr_t tcpoutTask_attributes = {
  .name = "ServerOutTask",
  .stack_size = 2048,
  .priority = (osPriority_t) osPriorityNormal3,
};


/* use static allocation to keep the heap size as low as possible */
#ifdef MBEDTLS_MEMORY_BUFFER_ALLOC_C
uint8_t memory_buf[MAX_MEM_SIZE];
#endif

/* List of trusted root CA certificates
 * Currently this is just GlobalSign as it's the root used by developer.mbed.org
 * If you want to trust more that one root, just concatenate them.
 */
const char SSL_CA_PEM[] =												\
"-----BEGIN CERTIFICATE-----\r\n"										\
"MIIDdTCCAl2gAwIBAgILBAAAAAABFUtaw5QwDQYJKoZIhvcNAQEFBQAwVzELMAkG\r\n"	\
"A1UEBhMCQkUxGTAXBgNVBAoTEEdsb2JhbFNpZ24gbnYtc2ExEDAOBgNVBAsTB1Jv\r\n"	\
"b3QgQ0ExGzAZBgNVBAMTEkdsb2JhbFNpZ24gUm9vdCBDQTAeFw05ODA5MDExMjAw\r\n"	\
"MDBaFw0yODAxMjgxMjAwMDBaMFcxCzAJBgNVBAYTAkJFMRkwFwYDVQQKExBHbG9i\r\n"	\
"YWxTaWduIG52LXNhMRAwDgYDVQQLEwdSb290IENBMRswGQYDVQQDExJHbG9iYWxT\r\n"	\
"aWduIFJvb3QgQ0EwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDaDuaZ\r\n"	\
"jc6j40+Kfvvxi4Mla+pIH/EqsLmVEQS98GPR4mdmzxzdzxtIK+6NiY6arymAZavp\r\n"	\
"xy0Sy6scTHAHoT0KMM0VjU/43dSMUBUc71DuxC73/OlS8pF94G3VNTCOXkNz8kHp\r\n"	\
"1Wrjsok6Vjk4bwY8iGlbKk3Fp1S4bInMm/k8yuX9ifUSPJJ4ltbcdG6TRGHRjcdG\r\n"	\
"snUOhugZitVtbNV4FpWi6cgKOOvyJBNPc1STE4U6G7weNLWLBYy5d4ux2x8gkasJ\r\n"	\
"U26Qzns3dLlwR5EiUWMWea6xrkEmCMgZK9FGqkjWZCrXgzT/LCrBbBlDSgeF59N8\r\n"	\
"9iFo7+ryUp9/k5DPAgMBAAGjQjBAMA4GA1UdDwEB/wQEAwIBBjAPBgNVHRMBAf8E\r\n"	\
"BTADAQH/MB0GA1UdDgQWBBRge2YaRQ2XyolQL30EzTSo//z9SzANBgkqhkiG9w0B\r\n"	\
"AQUFAAOCAQEA1nPnfE920I2/7LqivjTFKDK1fPxsnCwrvQmeU79rXqoRSLblCKOz\r\n"	\
"yj1hTdNGCbM+w6DjY1Ub8rrvrTnhQ7k4o+YviiY776BQVvnGCv04zcQLcFGUl5gE\r\n"	\
"38NflNUVyRRBnMRddWQVDf9VMOyGj/8N7yy5Y0b2qvzfvGn9LhJIZJrglfCm7ymP\r\n"	\
"AbEVtQwdpf5pLGkkeB6zpxxxYu7KyJesF12KwvhHhm4qxFYxldBniYUr+WymXUad\r\n"	\
"DKqC5JlR3XC321Y9YeRq4VzW9v493kHMB65jUr9TU/Qr6cf9tveCX4XSQRjbgbME\r\n"	\
"HMUfpIBvFSDJ3gyICh3WZlXi/EjJKSZp4A==\r\n"	\
"-----END CERTIFICATE-----\r\n";

char printf_putchar_wrapper(char c)
{
	return UARTPutChar(STDOUT, c);
}

int http_send_request(struct tls_connection *con, char *req, size_t req_size)
{
	int ret = 0;

	do {
		ret = tls_write(con, req, req_size);
		if(ret > 0) {
			req += ret;
			req_size -= ret;
		}
	} while(req_size > 0 && (ret > 0 || ret == TLS_WANT_READ || ret == TLS_WANT_WRITE));

	return ret;
}

int http_get_response(struct tls_connection *con, char *resp, size_t resp_size)
{
	int ret = 0;

	memset(resp, 0, resp_size);

	do {
		ret = tls_read(con, resp, resp_size);
		if(ret > 0) {
			resp += ret;
			resp_size -= ret;
		}
	} while(resp_size > 0 && (ret > 0 || ret == TLS_WANT_READ || ret == TLS_WANT_WRITE));

	return ret;
}

int utfpr_auth(void)
{
	int retries, ret = pdFALSE;

	struct hostent *server_addr = NULL;

	if(tls_client_init(&cli)) {
		ret = pdFALSE;
		goto exit;
	}

	if(tls_cert_load(&cli.tls, NULL, SSL_CA_PEM, NULL, NULL)) {
		ret = pdFALSE;
		goto deallocate;
	}

	retries = AUTH_SERVER_LOOKUP_RETRIES;

	do {
		server_addr = gethostbyname(AUTH_SERVER);
		if(server_addr == (void*)0) {
			retries--;
			vTaskDelay(2000);
		}
	} while(server_addr == NULL && retries);

	if(!retries) {
		ret = pdTRUE;
		goto deallocate;
	}

	snprintf(buf, sizeof(buf), "%hu.%hu.%hu.%hu", server_addr->h_addr[0], server_addr->h_addr[1], server_addr->h_addr[2], server_addr->h_addr[3]);

	if(tls_client_connect(&cli, buf, AUTH_PORT)) {
		ret = pdFALSE;
		goto deallocate;
	}

	if(http_send_request(&cli.con, AUTH_REQUEST, sizeof(AUTH_REQUEST)) < 0) {
		ret = pdFALSE;
		goto deallocate;
	}

	while(http_get_response(&cli.con, buf, sizeof(buf))) {
		if(strstr(buf, "Você está logado.")) {
			UARTPutString(STDOUT, "Você está logado por intranet.pb.utfpr.edu.br\n\r",0);
			ret = pdTRUE;
			break;
		}
	}

deallocate:
	tls_connection_free(&cli.con);
	tls_context_free(&cli.tls);
exit:
	return ret;
}

//volatile int reconnection_trigger = 0;
void SSL_Client(void *argument){
  /*
   * 0. Initialize the RNG and the session data
   */
#ifdef MBEDTLS_MEMORY_BUFFER_ALLOC_C
  mbedtls_memory_buffer_alloc_init(memory_buf, sizeof(memory_buf));
#endif

   // Limpa a tela do terminal
   UARTPutString(STDOUT, "\033[2J\033[H",0);

   //Informações de versões de software
   UARTPutString(STDOUT, "FreePMU - Versão: 2.0.0\n\r\n\r",0);
   UARTPutString(STDOUT, "Versão das bibliotecas utilizadas:\n\r", 0);
   UARTPutString(STDOUT, "FreeRTOS ", 9);
   UARTPutString(STDOUT, tskKERNEL_VERSION_NUMBER, 7);
   UARTPutString(STDOUT, "\n\r",2);
   UARTPutString(STDOUT, "LwIP ", 5);
   UARTPutString(STDOUT, LWIP_VERSION_STRING, 5);
   UARTPutString(STDOUT, "\n\r",2);
   UARTPutString(STDOUT, "mbedTLS ", 8);
   UARTPutString(STDOUT, MBEDTLS_VERSION_STRING, 6);
   UARTPutString(STDOUT, "\n\r",2);
   UARTPutString(STDOUT, "Little VGL ", 11);
   UARTPutString(STDOUT, "v8.0.0", 6);
   UARTPutString(STDOUT, "\n\r\n\r",4);

   printf_install_putchar(printf_putchar_wrapper);

  UARTPutString(STDOUT, "Obtendo endereço IP...\n\r", 0);

  // Wait for IP Address
  while(DHCP_GetState() != DHCP_DONE){
	  osDelay(100);
  }

  /* Server Task: */
  tcpTaskHandle = osThreadNew(pmu_tcp_server, NULL, &tcpTask_attributes);

  /* Server client Task: */
  tcpoutTaskHandle = osThreadNew(pmu_tcp_server_out, NULL, &tcpoutTask_attributes);

  // Get the current IP address.
  uint32_t ui32NewIPAddress = lwIPLocalIPAddrGet();
  char pcBuf[16];
  memset(pcBuf, 0, 16);

  // Convert the IP Address into a string.
  sprintf(pcBuf, "%d.%d.%d.%d", (int)(ui32NewIPAddress & 0xff), (int)((ui32NewIPAddress >> 8) & 0xff),
         (int)((ui32NewIPAddress >> 16) & 0xff), (int)((ui32NewIPAddress >> 24) & 0xff));

  //Display the IP
  UARTPutString(STDOUT, "Endereço IP: ", 14);
  UARTPutString(STDOUT, pcBuf, 0);
  UARTPutString(STDOUT, "\n\r",2);

  #if UTFPR_AUTH == 1
  // Imprime uma tela de boas-vindas
  UARTPutString(STDOUT, "Tarefa TLS de login iniciou!\n\r>>",30);
  utfpr_auth();
  #endif


  // Inicia cliente SNTP
  sntp_init();

  while(1){
	  UARTPutString(STDOUT, "\n\n\r\r",4);
	  sprintf((char *)buf, "Memória disponível no HEAP: %d bytes\n\r\n\r",(int)xPortGetFreeHeapSize());
	  UARTPutString(STDOUT, (char *)buf,0);
	  sprintf((char *)buf, "Name          State  Priority  Stack  Number\n\r");
	  UARTPutString(STDOUT, (char *)buf,0);
	  vTaskList((char *)buf);
	  UARTPutString(STDOUT, (char *)buf,0);

#if 0
	  if (reconnection_trigger){
		  do{
			  vTaskDelay(250);
		  }while(DHCP_State != DHCP_DONE);

		  reconnection_trigger = 0;
		  #if UTFPR_AUTH == 1
		  utfpr_auth();
		  #endif
	  }
#endif

	  vTaskDelay(60000);
  }
}

#endif /* MBEDTLS_BIGNUM_C && MBEDTLS_ENTROPY_C && MBEDTLS_SSL_TLS_C &&
          MBEDTLS_SSL_CLI_C && MBEDTLS_NET_C && MBEDTLS_RSA_C &&
          MBEDTLS_CERTS_C && MBEDTLS_PEM_PARSE_C && MBEDTLS_CTR_DRBG_C &&
          MBEDTLS_X509_CRT_PARSE_C */
