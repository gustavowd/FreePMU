/**
  ******************************************************************************
  * @file    LwIP/LwIP_HTTP_Server_Netconn_RTOS/Src/app_ethernet.c
  * @author  MCD Application Team
  * @brief   Ethernet specefic module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2016 STMicroelectronics International N.V. 
  * All rights reserved.</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include <string.h>
#include "main.h"
#include "lwip/opt.h"
#include "lwip/dhcp.h"
#include "lwip/netif.h"
#include "lwip/tcpip.h"
#include "lwip/sockets.h"
#include "vnc_app.h"
#include "ethernetif.h"

 /* embedded wizard includes */
#include "Application.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
#define MAX_DHCP_TRIES  4
volatile uint8_t VNC_State = VNC_IDLE;
volatile uint8_t VNC_LockState = 0;
struct netif gnetif; /* network interface structure */
/* Semaphore to signal Ethernet Link state update */
osSemaphoreId Netif_LinkSemaphore = NULL;
/* Ethernet link thread Argument */
struct link_str link_arg;
int _Sock;
static uint8_t iptxt[128];
osThreadId  VNC_ThreadId = 0;
/* Private function prototypes -----------------------------------------------*/
void VNC_SERVER_LogMessage (const char *message);
/* Private functions ---------------------------------------------------------*/


/**
  * @brief  Initializes audio
  * @param  None.
  * @retval Audio state.
  */
void VNC_SERVER_Start (void)
{
    sprintf((char*)iptxt,
            "IP address : %d.%d.%d.%d\n",
            (uint8_t)(gnetif.ip_addr.addr),
            (uint8_t)((gnetif.ip_addr.addr) >> 8),
            (uint8_t)((gnetif.ip_addr.addr) >> 16),
            (uint8_t)((gnetif.ip_addr.addr) >> 24));

    VNC_SERVER_LogMessage ((char *)iptxt);
}

/**
  * @brief  Initializes audio
  * @param  None.
  * @retval Audio state.
  */
void VNC_SERVER_Stop (void)
{
}

/**
  * @brief  Get VNC state
  * @param  None.
  * @retval VNC state.
  */
uint8_t  VNC_GetState(void)
{
  return VNC_State;
}


/**
  * @brief  Get VNC state
  * @param  None.
  * @retval VNC state.
  */
void VNC_SetState(uint8_t state)
{
  VNC_State = state;
}
/**
  * @brief  Get VNC state
  * @param  None.
  * @retval VNC state.
  */
uint8_t  VNC_GetLockState(void)
{
  return VNC_LockState;
}

/**
  * @brief  Get VNC state
  * @param  None.
  * @retval VNC state.
  */
void  VNC_SetLockState(uint8_t LockState)
{
  VNC_LockState = LockState;
}

void VNC_SERVER_LogMessage (const char *message) {
	ApplicationClasse disp = EwGetAutoObject(&ApplicationAutoobjeto, ApplicationClasse);
	XString m = EwNewStringAnsi(message);
	ApplicationClasse__LogMessageTrigger(disp, m);
}



/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
