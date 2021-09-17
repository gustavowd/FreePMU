/*
 * dhcp_client.c
 *
 *  Created on: 24 de set de 2017 / 2021
 *      Author: Matheus K. Ferst / Gustavo Denardin
 */

#include "dhcp_client.h"
#include <stddef.h>
#include "stm32f7xx_hal_conf.h"
#include "lwip/netif.h"
#include "lwip/dhcp.h"
#include "lwip/tcpip.h"
#include "FreeRTOS.h"
#include "ethernetif.h"

#include "semphr.h"
#include "GUI/gui.h"

static uint32_t DHCP_State = DHCP_IFDOWN;
struct netif gnetif; /* network interface structure */
extern ETH_HandleTypeDef EthHandle;
//extern xSemaphoreHandle sem_connected;
char iptxt[21];

char *GetIPAdddress(void){
       if (iptxt[0] == '\0'){
               return NULL;
       }else{
               return iptxt;
       }
}


uint32_t lwIPLocalIPAddrGet(void){
#if LWIP_AUTOIP || LWIP_DHCP
	return((uint32_t)gnetif.ip_addr.addr);
#else
	return 0xFFFFFFFF;
#endif
}

/**
  * @brief  Initializes the lwIP stack
  * @param  None
  * @retval None
  */
void Netif_Config(void)
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
  iptxt[0] = '\0';

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
void DHCP_Thread(void * argument){
	uint32_t phyreg;
	uint32_t watchdog_cnt = 0;
	uint32_t dhcp_state = DHCP_State;
	//static int first_connection = 1;

	dhcp_set_status(dhcp_state);

    while(1) {
    	switch(DHCP_State) {
			case DHCP_IFDOWN:
				/* Create tcp_ip stack thread */
				tcpip_init(NULL, NULL);

				/* Initialize the LwIP stack */
				Netif_Config();

				/* Check connection */
				DHCP_State = DHCP_CABLE_DISCONNECTED;
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
				iptxt[0] = '\0';
				dhcp_start(&gnetif);
				DHCP_State = DHCP_WAIT_FOR_ADDRESS;
			break;
			case DHCP_WAIT_FOR_ADDRESS:
				if (dhcp_supplied_address(&gnetif)) {
					watchdog_cnt = 0;
					DHCP_State = DHCP_DONE;
					// Removido dhcp_stop pq não deve-se parar o servidor dhcp
					//dhcp_stop(&gnetif);
					/*
					if (first_connection){
						first_connection = 0;
						xSemaphoreGive(sem_connected);

					}
					*/
					// TODO: link is up
					sprintf((char*)iptxt,
							"IP: %d.%d.%d.%d",
							(uint8_t)(gnetif.ip_addr.addr),
							(uint8_t)((gnetif.ip_addr.addr) >> 8),
							(uint8_t)((gnetif.ip_addr.addr) >> 16),
							(uint8_t)((gnetif.ip_addr.addr) >> 24));
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
				}
			break;
			case DHCP_DONE:
				HAL_ETH_ReadPHYRegister(&EthHandle, PHY_BSR, &phyreg);
				if (!(phyreg & PHY_AUTONEGO_COMPLETE)) {
					DHCP_State = DHCP_CABLE_DISCONNECTED;
					iptxt[0] = '\0';
					dhcp_stop(&gnetif);
					// TODO: link is down
				}
			break;
			default:
				DHCP_State = DHCP_UNKWOWN;
			break;
    	}
    	// Update dhcp status in the LCD screen
    	if (dhcp_state != DHCP_State){
    		int ret = dhcp_set_status(DHCP_State);
    		if (ret >= 0){
    			dhcp_state = DHCP_State;
    		}
    	}
    	vTaskDelay(250);
    }
}


uint32_t DHCP_GetState(void){
	return DHCP_State;
}
