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
#include "vnc_app.h"
#include "cmsis_os.h"
#include "lwip/netdb.h"

#include <string.h>
#include "stm32f7xx_hal.h"
#include "stm32f7xx_hal_uart_ex.h"
#include "stm32f7xx_hal_gpio.h"
#include "printf_lib.h"

// Manipulador de configuração da UART da biblioteca da ST
UART_HandleTypeDef huart1;

#if 0
// Declara um semáforo para sincronizar a transmissão de dados na UART
BRTOS_Sem 	*sUARTTX;

// Declara um mutex para controlar o acesso a UART
BRTOS_Mutex *mutexTx;

// Declara uma fila para adquirir os dados recebidos pela UART
BRTOS_Queue  *qUART;
#endif

void VNC_SERVER_Start (void);


#if 0
/*
 * Função para receber um caracter pela porta serial.
 */
uint8_t UARTGetChar(char *string, ostick_t timeout){

	// Espera por um dado na fila por um tempo máximo determinado em timeout
	return OSQueuePend(qUART, (uint8_t*)string, timeout);
}

/* Função chamada dentro da interrupção de UART.
 * Copia dado recebido para uma fila.
 */
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart){
	OSQueuePost(qUART,huart->Instance->RDR);
	OS_INT_EXIT_EXT();
}

/* Função chamada dentro da interrupção de UART.
 * Informa que um próximo caracter pode ser transmitido.
 */
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart){
	(void)huart;
	OSSemPost(sUARTTX);
	OS_INT_EXIT_EXT();
}

/*
 * Função para transmitir um caracter pela porta serial.
 */
char UARTPutChar(char ucData)
{
    // Adquire a porta serial
	OSMutexAcquire(mutexTx,0);
	// Envia um caracter
    HAL_UART_Transmit_IT(&huart1,(uint8_t *)&ucData,1);
	// Espera por uma interrupção da UART
	OSSemPend(sUARTTX,0);
	// Libera a porta serial
	OSMutexRelease(mutexTx);
	return '\0';
}


/*
 * Função para transmitir uma string pela porta serial.
 */
void UARTPutString(char *string, uint16_t size){
	// Adquire a porta serial
	OSMutexAcquire(mutexTx,100);

    // Descobre o tamanho da string, caso não informado
	if (!size){
    	uint8_t *tmp = (uint8_t *)string;

    	while(*tmp++){
    		size++;
    	}
    }

    /* Transmite uma sequencia de dados, com fluxo controlado pela interrupção */
    HAL_UART_Transmit_IT(&huart1,(uint8_t *)string,size);

    // Espera pelo fim da transmissão
	OSSemPend(sUARTTX,0);

	// Libera a porta serial
	OSMutexRelease(mutexTx);
}
#endif

static mbedtls_net_context server_fd;
static uint32_t flags;
static uint8_t buf[1024];
static const uint8_t *pers = "ssl_client";
static uint8_t vrfy_buf[512];

static int ret;

mbedtls_entropy_context entropy;
mbedtls_ctr_drbg_context ctr_drbg;
mbedtls_ssl_context ssl;
mbedtls_ssl_config conf;
mbedtls_x509_crt cacert;

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

//BRTOS_Sem *sem_connected;

void SSL_Client(void const *argument)
{
  int len;
  struct hostent* server_addr;

  /*
   * 0. Initialize the RNG and the session data
   */
#ifdef MBEDTLS_MEMORY_BUFFER_ALLOC_C
  mbedtls_memory_buffer_alloc_init(memory_buf, sizeof(memory_buf));
#endif

  // Não precisa essa linha pq configura no vnc player
  //mbedtls_net_init(NULL);
#if 0
  OSSemBinaryCreate(0,&sem_connected);

  // Espera conexão
  if (OSSemCreate(0,&sUARTTX) != ALLOC_EVENT_OK)
  {
    // Oh Oh
    // Não deveria entrar aqui !!!
    BlockTask(0);
  };

  if (OSQueueCreate(64, &qUART) != ALLOC_EVENT_OK)
  {
    // Oh Oh
    // Não deveria entrar aqui !!!
	   BlockTask(0);
  };

  if (OSMutexCreate(&mutexTx,0) != ALLOC_EVENT_OK)
  {
    // Oh Oh
    // Não deveria entrar aqui !!!
    BlockTask(0);
  };
#endif

  // Inicializa o hardware da UART
  huart1.Instance = USART1;
  huart1.Init.BaudRate = 115200;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  huart1.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  huart1.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  BSP_COM_Init(COM1, &huart1);
  /* Habilita interrupções de erro da UART */
  SET_BIT(huart1.Instance->CR3, USART_CR3_EIE);

  /* Habilita as interrupões de erro de paridade e buffer vazio */
  SET_BIT(huart1.Instance->CR1, USART_CR1_PEIE | USART_CR1_RXNEIE);


#if 0
   // Limpa a tela do terminal
   UARTPutString("\033[2J\033[H",0);

   // Imprime uma tela de boas-vindas
   UARTPutString("BRTOS iniciou!\n\r\n\r>>",14);

   printf_install_putchar(UARTPutChar);

  //OSDelayTask(20000);
  //VNC_SERVER_Start();

  OSSemPend(sem_connected, 0);
#endif
  mbedtls_ssl_init(&ssl);
  mbedtls_ssl_config_init(&conf);
  mbedtls_x509_crt_init(&cacert);
  mbedtls_ctr_drbg_init(&ctr_drbg);

  mbedtls_printf( "\n\r  . Seeding the random number generator..." );
 
  mbedtls_entropy_init( &entropy );
  len = strlen((char *)pers);
  if((ret = mbedtls_ctr_drbg_seed(&ctr_drbg, mbedtls_entropy_func, &entropy, (const unsigned char *) pers, len)) != 0)
  {
    mbedtls_printf( " failed\n\r  ! mbedtls_ctr_drbg_seed returned %d\n\r", ret );
    goto exit;
  }

  mbedtls_printf( " ok\n\r" );

  /*
   * 1. Initialize certificates
   */
  mbedtls_printf( "  . Loading the CA root certificate ..." );

  //ret = mbedtls_x509_crt_parse( &cacert, (const unsigned char *) mbedtls_test_cas_pem, mbedtls_test_cas_pem_len );
  ret = mbedtls_x509_crt_parse( &cacert, (const unsigned char *) SSL_CA_PEM, sizeof (SSL_CA_PEM) );
  
  if( ret < 0 )
  {
    mbedtls_printf( " failed\r\n  !  mbedtls_x509_crt_parse returned -0x%x\r\n\r\n", -ret );
    goto exit;
  }

  mbedtls_printf( " ok (%d skipped)\r\n", ret );

  /*
   * 2. Start the connection
   */

  /* Get Server IP */
  do{
	  server_addr = gethostbyname(SERVER_NAME);
	  if (server_addr == NULL){
		  vTaskDelay(2000);
	  }
  }while(server_addr == NULL);

  char server_ip_s[16];
  unsigned long server_ip = *((unsigned long*) server_addr->h_addr);

  // Convert the IP Address into a string.
  sprintf(server_ip_s, "%d.%d.%d.%d", (int)(server_ip & 0xff), (int)((server_ip >> 8) & 0xff),
          (int)((server_ip >> 16) & 0xff), (int)((server_ip >> 24) & 0xff));


  mbedtls_printf( "  . Connecting to tcp/%s/%s...\r\n", SERVER_NAME, SERVER_PORT );
  
  //if((ret = mbedtls_net_connect(&server_fd, SERVER_NAME, SERVER_PORT, MBEDTLS_NET_PROTO_TCP)) != 0)
  if((ret = mbedtls_net_connect(&server_fd, server_ip_s, SERVER_PORT, MBEDTLS_NET_PROTO_TCP)) != 0)
  {
    mbedtls_printf( " failed\n\r  ! mbedtls_net_connect returned %d\r\n\r\n", ret );
    goto exit;
  }

  mbedtls_printf( " ok\r\n" );

  /*
   * 3. Setup stuff
   */
  mbedtls_printf( "  . Setting up the SSL/TLS structure...\r\n" );
  
  if((ret = mbedtls_ssl_config_defaults(&conf, MBEDTLS_SSL_IS_CLIENT, MBEDTLS_SSL_TRANSPORT_STREAM, MBEDTLS_SSL_PRESET_DEFAULT)) != 0)
  {
    mbedtls_printf( " failed\n\r  ! mbedtls_ssl_config_defaults returned %d\r\n\r\n", ret );
    goto exit;
  }

  mbedtls_printf( " ok\n\r" );

  /* OPTIONAL is not optimal for security,
   * but makes interop easier in this simplified example */
  mbedtls_ssl_conf_authmode( &conf, MBEDTLS_SSL_VERIFY_OPTIONAL );
  mbedtls_ssl_conf_ca_chain( &conf, &cacert, NULL );
  mbedtls_ssl_conf_rng( &conf, mbedtls_ctr_drbg_random, &ctr_drbg );

  if((ret = mbedtls_ssl_setup(&ssl, &conf)) != 0)
  {
    mbedtls_printf( " failed\n\r  ! mbedtls_ssl_setup returned %d\n\r\n\r", ret );
    goto exit;
  }

  //if((ret = mbedtls_ssl_set_hostname( &ssl, "mbed TLS Server 1" )) != 0)
  if((ret = mbedtls_ssl_set_hostname( &ssl, SERVER_NAME )) != 0)
  {
    mbedtls_printf( " failed\n\r  ! mbedtls_ssl_set_hostname returned %d\n\r\n\r", ret );
    goto exit;
  }

  mbedtls_ssl_set_bio(&ssl, &server_fd, mbedtls_net_send, mbedtls_net_recv, NULL);

  /*
   * 4. Handshake
   */
  mbedtls_printf( "  . Performing the SSL/TLS handshake...\r\n" );

  while((ret = mbedtls_ssl_handshake( &ssl )) != 0)
  {
    if(ret != MBEDTLS_ERR_SSL_WANT_READ && ret != MBEDTLS_ERR_SSL_WANT_WRITE)
    {
      mbedtls_printf( " failed\n\r  ! mbedtls_ssl_handshake returned -0x%x\n\r\n\r", -ret );
      goto exit;
    }
  }

  mbedtls_printf( " ok\n\r" );

  /*
   * 5. Verify the server certificate
   */
  mbedtls_printf( "  . Verifying peer X.509 certificate...\r\n" );

  if(( flags = mbedtls_ssl_get_verify_result( &ssl )) != 0)
  {
  
    mbedtls_printf( " failed\n\r" );
    mbedtls_x509_crt_verify_info((char *)vrfy_buf, sizeof( vrfy_buf ), "  ! ", flags);

    mbedtls_printf( "%s\n\r", vrfy_buf );
  }
  else
  {
    mbedtls_printf( " ok\n\r" );
  }
  
  /*
   * 6. Write the GET request
   */
  
  mbedtls_printf( "  > Write to server:\n\r" );
  
  //sprintf((char *) buf, GET_REQUEST);
  sprintf((char *) buf, POST_REQUEST);
  len = strlen((char *) buf);
  
  while((ret = mbedtls_ssl_write(&ssl, buf, len)) <= 0)
  {
    if( ret != MBEDTLS_ERR_SSL_WANT_READ && ret != MBEDTLS_ERR_SSL_WANT_WRITE )
    {
      mbedtls_printf( " failed\n  ! mbedtls_ssl_write returned %d\n\n", ret );
      goto exit;
    }
  }

  len = ret;
  //mbedtls_printf(" %d bytes written\n\n%s", len, (char *) buf);
  mbedtls_printf(" %d bytes written\n\r", len);

  /*
   * 7. Read the HTTP response
   */
   mbedtls_printf("  < Read from server:");

  do
  {
    len = sizeof( buf ) - 1;
    memset( buf, 0, sizeof( buf ) );
    ret = mbedtls_ssl_read( &ssl, buf, len );

    if(ret == MBEDTLS_ERR_SSL_WANT_READ || ret == MBEDTLS_ERR_SSL_WANT_WRITE)
    {
      continue;
    }
    
    if(ret == MBEDTLS_ERR_SSL_PEER_CLOSE_NOTIFY)
    {
      break;
    }

    if(ret < 0)
    {
      mbedtls_printf( "failed\n  ! mbedtls_ssl_read returned %d\n\n", ret );
      break;
    }

    if(ret == 0)
    {
      mbedtls_printf( "\n\nEOF\n\n" );
      break;
    }

    len = ret;
    //mbedtls_printf( " %d bytes read\n\n%s", len, (char *) buf );
    char str_log[] = {0x56, 0x6F, 0x63, 0xC3, 0xAA, 0x20, 0x65, 0x73, 0x74, 0xC3, 0xA1, 0x00};
    if (strstr(buf, str_log) != NULL){
  	  mbedtls_printf("\n\r\n\r  Você está logado!\n\r");
  	  break;
    }
  }
  while(1);


  mbedtls_ssl_close_notify( &ssl );

exit:
  mbedtls_net_free( &server_fd );

  mbedtls_x509_crt_free( &cacert );
  mbedtls_ssl_free( &ssl );
  mbedtls_ssl_config_free( &conf );
  mbedtls_ctr_drbg_free( &ctr_drbg );
  mbedtls_entropy_free( &entropy );
  
  while(1){
	  vTaskDelay(1000);
  }

  if ((ret < 0) && (ret != MBEDTLS_ERR_SSL_PEER_CLOSE_NOTIFY))
  {
    //Error_Handler();
  }
  else
  {
    //Success_Handler();
  }
}

#endif /* MBEDTLS_BIGNUM_C && MBEDTLS_ENTROPY_C && MBEDTLS_SSL_TLS_C &&
          MBEDTLS_SSL_CLI_C && MBEDTLS_NET_C && MBEDTLS_RSA_C &&
          MBEDTLS_CERTS_C && MBEDTLS_PEM_PARSE_C && MBEDTLS_CTR_DRBG_C &&
          MBEDTLS_X509_CRT_PARSE_C */
