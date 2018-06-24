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

 /* embedded wizard includes */
#include "Application.h"

static uint8_t text[64];

volatile uint8_t DHCP_State = DHCP_IFDOWN;
struct netif gnetif; /* network interface structure */
extern ETH_HandleTypeDef EthHandle;
xSemaphoreHandle VNC_DHCP_Semaphore = NULL;
osThreadId  DHCP_ThreadId = 0;

void SERVER_LogMessage (const char *message) {
	ApplicationClasse disp = EwGetAutoObject(&ApplicationAutoobjeto, ApplicationClasse);
	XString m = EwNewStringAnsi(message);
	ApplicationClasse__LogMessageTrigger(disp, m);
}

/*	Função para controlar o estado dos botões Iniciar e Parar na interface
 *  StartButton define o estado do botão Iniciar, com valores 0 e 1, desativando e ativando o botão, respectivamente
 	Idem para StopButton. */
void SERVER_ButtonStatus (uint8_t StartButton, uint8_t StopButton) {
	ApplicationClasse disp = EwGetAutoObject(&ApplicationAutoobjeto, ApplicationClasse);
	ApplicationClasse__ChangeBtnState(disp, (XInt32)StartButton, (XInt32)StopButton);
}


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

  /* IP address setting */
  //IP4_ADDR(&ipaddr, IP_ADDR0, IP_ADDR1, IP_ADDR2, IP_ADDR3);
  //IP4_ADDR(&netmask, NETMASK_ADDR0, NETMASK_ADDR1 , NETMASK_ADDR2, NETMASK_ADDR3);
  //IP4_ADDR(&gw, GW_ADDR0, GW_ADDR1, GW_ADDR2, GW_ADDR3);
  ipaddr.addr = 0;
  netmask.addr = 0;
  gw.addr = 0;

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

#if 0
  if (netif_is_link_up(&gnetif))
  {
    /* When the netif is fully configured this function must be called.*/
    netif_set_up(&gnetif);
  }
  else
  {
    /* When the netif link is down this function must be called */
    netif_set_down(&gnetif);
  }
#endif
  /* When the netif is fully configured this function must be called.*/
  netif_set_up(&gnetif);
}


void low_level_reinit(struct netif *netif);
void DHCP_Thread(void const * argument) {
	uint32_t phyreg;
	uint32_t watchdog_cnt = 0;
	static int first_connection = 1;
	if(VNC_DHCP_Semaphore == NULL) VNC_DHCP_Semaphore= xSemaphoreCreateBinary();

    while(1) {
    	switch(DHCP_State) {
    	case DHCP_IFDOWN:
    	    /* Create tcp_ip stack thread */
    	    tcpip_init(NULL, NULL);

    	    /* Initialize the LwIP stack */
    	    Netif_Config();

    	    SERVER_LogMessage ("Iniciando...");

    	    /* Check connection */
    	    //if (netif_is_up(&gnetif)) {
    	    DHCP_State = DHCP_CABLE_DISCONNECTED;
    	    //}
    		break;
    	case DHCP_CABLE_DISCONNECTED:
    		HAL_ETH_ReadPHYRegister(&EthHandle, PHY_BSR, &phyreg);
    		if (phyreg & PHY_AUTONEGO_COMPLETE) {
    			DHCP_State = DHCP_CABLE_CONNECTED;
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
    		            "Endereço IP : %d.%d.%d.%d\n",
    		            (uint8_t)(gnetif.ip_addr.addr),
    		            (uint8_t)((gnetif.ip_addr.addr) >> 8),
    		            (uint8_t)((gnetif.ip_addr.addr) >> 16),
    		            (uint8_t)((gnetif.ip_addr.addr) >> 24));

    		    SERVER_LogMessage ((char *)text);

    			if (first_connection){
    				first_connection = 0;
    			}
    			// TODO: link is up
    		} else {
    			watchdog_cnt++;
    			// 50 segundos para pegar o IP, senão reinicia a conexão ethernet
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
}
#endif
