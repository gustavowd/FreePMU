/*
 * dhcp_client.h
 *
 *  Created on: 24 de set de 2017
 *      Author: Matheus K. Ferst
 */

#ifndef APPLICATION_USER_MODULES_DHCPCLIENT_DHCP_CLIENT_H_
#define APPLICATION_USER_MODULES_DHCPCLIENT_DHCP_CLIENT_H_

#include "main.h"

extern xSemaphoreHandle VNC_DHCP_Semaphore, SSL_DHCP_Semaphore;

/*Static IP ADDRESS*/
#define IP_ADDR0   192
#define IP_ADDR1   168
#define IP_ADDR2   0
#define IP_ADDR3   10

/*NETMASK*/
#define NETMASK_ADDR0   255
#define NETMASK_ADDR1   255
#define NETMASK_ADDR2   255
#define NETMASK_ADDR3   0
#define GW_ADDR3   1

/*Gateway Address*/
#define GW_ADDR0   192
#define GW_ADDR1   168
#define GW_ADDR2   0

enum DHCP_STATES {
	DHCP_IFDOWN, DHCP_CABLE_DISCONNECTED, DHCP_CABLE_CONNECTED, DHCP_WAIT_FOR_ADDRESS, DHCP_DONE, DHCP_UNKWOWN
};

uint32_t lwIPLocalIPAddrGet(void);
uint32_t DHCP_GetState(void);
char *GetIPAdddress(void);

#endif /* APPLICATION_USER_MODULES_DHCPCLIENT_DHCP_CLIENT_H_ */
