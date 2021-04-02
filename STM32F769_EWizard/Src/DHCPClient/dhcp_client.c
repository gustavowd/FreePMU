/*
 * dhcp_client.c
 *
 *  Created on: 24 de set de 2017
 *      Author: Matheus K. Ferst
 */
#if 1
#include "dhcp_client.h"
#include <stddef.h>
#include "stm32f7xx_hal.h"
#include "lwip/netif.h"
#include "lwip/dhcp.h"
#include "lwip/tcpip.h"
#include "ethernetif.h"

/* Uncomment in order to use fixed IP. Specify the addresses below. */
#define DHCP_ENABLE

 /* embedded wizard includes */
#include "Application.h"

static uint8_t text[64];

volatile uint8_t DHCP_State = DHCP_IFDOWN;
struct netif gnetif; /* network interface structure */
extern ETH_HandleTypeDef EthHandle;
xSemaphoreHandle VNC_DHCP_Semaphore = NULL;
osThreadId  DHCP_ThreadId = 0;

extern osMutexId guiMut_id;

void SERVER_LogMessage (const char *message) {
	osMutexWait(guiMut_id,osWaitForever);
	ApplicationClasse disp = EwGetAutoObject(&ApplicationAutoobjeto, ApplicationClasse);
	XString m = EwNewStringAnsi(message);
	ApplicationClasse__LogMessageTrigger(disp, m);
	osMutexRelease(guiMut_id);
}

void SERVER_StatusMessage (const char *message) {
	osMutexWait(guiMut_id,osWaitForever);
	ApplicationClasse disp = EwGetAutoObject(&ApplicationAutoobjeto, ApplicationClasse);
	XString m = EwNewStringAnsi(message);
	ApplicationClasse__StatusTrigger(disp, m);
	osMutexRelease(guiMut_id);
}


extern void pmu_tcp_server(void const * argument);
extern void pmu_tcp_server_out(void const * argument);
osThreadId serverThread_Id = NULL;
osThreadId serveroutThread_Id = NULL;

/**
  * @brief  Initializes the lwIP stack
  * @param  None
  * @retval None
  */
static void Netif_Config(void)
{
  ip_addr_t ipaddr;
  ip_addr_t netmask;
  ip_addr_t gw;

#ifdef DHCP_ENABLE
  ipaddr.addr = 0;
  netmask.addr = 0;
  gw.addr = 0;
#else
  /* IP address setting */
  IP4_ADDR(&ipaddr, 150, 162, 16, 119);
  IP4_ADDR(&netmask, 255, 255 , 255, 0);
  IP4_ADDR(&gw, 150, 162, 16, 254);
#endif



  /* - netif_add(struct netif *netif, ip_addr_t *ipaddr,
  ip_addr_t *netmask, ip_addr_t *gw,
  void *state, err_t (* init)(struct netif *netif),
  err_t (* input)(struct pbuf *p, struct netif *netif))

  Adds your network interface to the netif_list. Allocate a struct
  netif and pass a pointer to this structure as the first argument.
  Give pointers to cleared ip_addr structures when using DHCP,
  or fill them with sane numbers otherwise. The state pointer may be NULL.

  The init function pointer must point to a initialization function for
  your ethernet netif interface. The following code illustrates it's use.*/

  netif_add(&gnetif, &ipaddr, &netmask, &gw, NULL, &ethernetif_init, &tcpip_input);

  /*  Registers the default network interface. */
  netif_set_default(&gnetif);

  /* When the netif is fully configured this function must be called.*/
  netif_set_up(&gnetif);
}


void low_level_reinit(struct netif *netif);
void DHCP_Thread(void const * argument) {
	uint32_t phyreg;
	uint32_t watchdog_cnt = 0;
	static int first_connection = 1;
	if(VNC_DHCP_Semaphore == NULL) VNC_DHCP_Semaphore= xSemaphoreCreateBinary();

	// Aguarda a tarefa do LCD subir
	vTaskDelay(2500);

#ifdef DHCP_ENABLE
    while(1) {
    	switch(DHCP_State) {
    	case DHCP_IFDOWN:
    	    SERVER_LogMessage ("Iniciando a interface de rede");
    	    SERVER_StatusMessage ("Esperando acesso a rede");

    	    /* Create tcp_ip stack thread */
    	    tcpip_init(NULL, NULL);

    	    /* Initialize the LwIP stack */
    	    Netif_Config();

    	    DHCP_State = DHCP_CABLE_DISCONNECTED;
    		break;
    	case DHCP_CABLE_DISCONNECTED:
    		HAL_ETH_ReadPHYRegister(&EthHandle, PHY_BSR, &phyreg);
    		if (phyreg & PHY_AUTONEGO_COMPLETE) {
    			DHCP_State = DHCP_CABLE_CONNECTED;
    		}else{
    			SERVER_LogMessage ("Cabo desconectado!");
    			vTaskDelay(1000);
    		}
    		break;
    	case DHCP_CABLE_CONNECTED:
    		gnetif.ip_addr.addr = 0;
			gnetif.netmask.addr = 0;
			gnetif.gw.addr = 0;
			dhcp_start(&gnetif);

			SERVER_LogMessage ("Iniciando DHCP...");

			DHCP_State = DHCP_WAIT_FOR_ADDRESS;
    		break;
    	case DHCP_WAIT_FOR_ADDRESS:
    		if (dhcp_supplied_address(&gnetif)) {
    			watchdog_cnt = 0;
    			DHCP_State = DHCP_DONE;
    			dhcp_stop(&gnetif);

    		    sprintf((char*)text,
    		            "Endereco IP : %d.%d.%d.%d\n",
    		            (uint8_t)(gnetif.ip_addr.addr),
    		            (uint8_t)((gnetif.ip_addr.addr) >> 8),
    		            (uint8_t)((gnetif.ip_addr.addr) >> 16),
    		            (uint8_t)((gnetif.ip_addr.addr) >> 24));

    		    SERVER_LogMessage ((char *)text);

    			if (first_connection){
    				first_connection = 0;

    				/* Cria tarefa do servidor TCP/UDP */
    				osThreadDef(PDCServerTask, pmu_tcp_server, osPriorityNormal, 0, 3072);
    				serverThread_Id = osThreadCreate (osThread(PDCServerTask), NULL);

    				/* Cria tarefa que envia os pacotes de dados para o PDC */
    				osThreadDef(ServerOutTask, pmu_tcp_server_out, osPriorityNormal, 0, 2048);
    				serveroutThread_Id = osThreadCreate (osThread(ServerOutTask), NULL);
    			}
    			// TODO: link is up
    		} else {
    			watchdog_cnt++;
    			// 50 segundos para pegar o IP, sen�o reinicia a conex�o ethernet
    			if (watchdog_cnt < 200){
    				DHCP_State = DHCP_WAIT_FOR_ADDRESS;
    			}else{
    				watchdog_cnt = 0;

    				dhcp_stop(&gnetif);

    			    /* When the netif link is down this function must be called */
    			    netif_set_down(&gnetif);

    			    HAL_ETH_Stop(&EthHandle);
    			    HAL_ETH_DeInit(&EthHandle);

    			    osDelay(10);

    			    low_level_reinit(&gnetif);

    			    netif_set_up(&gnetif);

    	    	    DHCP_State = DHCP_CABLE_DISCONNECTED;
    			}

    			/* Timeout:
    			 * dhcp = (struct dhcp *)netif_get_client_data(&gnetif, LWIP_NETIF_CLIENT_DATA_INDEX_DHCP);
    			 *  if (dhcp->tries > MAX_DHCP_TRIES) {
    			 *  	VNC_State = VNC_ERROR;
    			 *  	dhcp_stop(&gnetif);
    			 *  	VNC_SERVER_LogMessage ("No reply from DHCP Server!\n");
    			 *  }
    			 * */
    		}
    		break;
    	case DHCP_DONE:
    		HAL_ETH_ReadPHYRegister(&EthHandle, PHY_BSR, &phyreg);
    		if (!(phyreg & PHY_AUTONEGO_COMPLETE)) {
    			SERVER_LogMessage ("Cabo desconectado!");
    			DHCP_State = DHCP_CABLE_DISCONNECTED;
    			// TODO: link is down
    		}
    		break;
    	}
    	vTaskDelay(250);
    }
#else
    /* Create tcp_ip stack thread */
    tcpip_init(NULL, NULL);
    /* Initialize the LwIP stack */
    Netif_Config();

    sprintf((char*)text,
            "IP fixo: %d.%d.%d.%d\n",
            (uint8_t)(gnetif.ip_addr.addr),
            (uint8_t)((gnetif.ip_addr.addr) >> 8),
            (uint8_t)((gnetif.ip_addr.addr) >> 16),
            (uint8_t)((gnetif.ip_addr.addr) >> 24));

    SERVER_LogMessage ((char *)text);

    while(1) {
    	vTaskDelay(250);
    }
#endif
}
#endif
