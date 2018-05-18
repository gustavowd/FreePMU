/** 
  *  Portions COPYRIGHT 2016 STMicroelectronics
  *  Copyright (C) 2006-2015, ARM Limited, All Rights Reserved
  *
  ******************************************************************************
  * @file    net_sockets.c
  * @author  MCD Application Team
  * @version V1.2.1
  * @date    14-April-2017
  * @brief   TCP/IP or UDP/IP networking functions iplementation based on LwIP API
             see the file "mbedTLS/library/net_socket_template.c" for the standard
			 implmentation
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

#include <string.h>
#include <stdint.h>

#if defined(MBEDTLS_NET_C)

#if defined(MBEDTLS_PLATFORM_C)
#include "mbedtls/platform.h"
#else
#include <stdlib.h>
#endif

#include "mbedtls/net_sockets.h"

#include "lwip/dhcp.h"
#include "lwip/tcpip.h"
#include "lwip/netdb.h"
#include "lwip/sockets.h"
   
#include "netif/ethernet.h"

#include "ethernetif.h"
#include "stm32f7xx_hal.h"

#include "main.h"
#include "vnc_app.h"

static struct netif netif;
static int net_would_block( const mbedtls_net_context *ctx );
/*
 * Initialize LwIP stack and get a dynamic IP address.
 */
void mbedtls_net_init( mbedtls_net_context *ctx )
{
  
  ip4_addr_t addr;
  ip4_addr_t netmask;
  ip4_addr_t gw;
  uint32_t start;
 
  ctx->fd = -1;
  
  tcpip_init(NULL, NULL);

  /* IP default settings, to be overridden by DHCP */  

  IP4_ADDR(&addr, IP_ADDR0, IP_ADDR1, IP_ADDR2, IP_ADDR3);
  IP4_ADDR(&gw, GW_ADDR0, GW_ADDR1, GW_ADDR2, GW_ADDR3);
  //IP4_ADDR(&netmask, MASK_ADDR0, MASK_ADDR1, MASK_ADDR2, MASK_ADDR3);
  IP4_ADDR(&netmask, NETMASK_ADDR0, NETMASK_ADDR1, NETMASK_ADDR2, NETMASK_ADDR3);
  
  /* add the network interface */    
  netif_add(&netif, &addr, &netmask, &gw, NULL, &ethernetif_init, &ethernet_input);

  /* register the default network interface */
  netif_set_up(&netif);

#ifdef USE_DHCP
  dhcp_start(&netif);
#endif

  start = HAL_GetTick();
  
  while((netif.ip_addr.addr == 0) && (HAL_GetTick() - start < 10000))
  {
  }
  
  if (netif.ip_addr.addr == 0)
  {
    printf(" Failed to get ip address! Please check your network configuration.\n");
    //Error_Handler();
  }
  else
  {
    printf("\nIpAdress = %d.%d.%d.%d\n", (netif.ip_addr.addr & 0xff), ((netif.ip_addr.addr >> 8) & 0xff)
                                        , ((netif.ip_addr.addr >> 16) & 0xff), ((netif.ip_addr.addr >> 24)& 0xff));
#ifdef USE_DHCP
    dhcp_stop(&netif);
#endif
  }
}

/*
 * Initiate a TCP connection with host:port and the given protocol
 */
int mbedtls_net_connect( mbedtls_net_context *ctx, const char *host, const char *port, int proto )
{
  int ret;
  struct addrinfo hints;
  struct addrinfo *list;
  struct addrinfo *current;

  /* Do name resolution with both IPv6 and IPv4 */
  memset(&hints, 0, sizeof(hints));
  hints.ai_family = AF_UNSPEC;
  hints.ai_socktype = proto == MBEDTLS_NET_PROTO_UDP ? SOCK_DGRAM : SOCK_STREAM;
  hints.ai_protocol = proto == MBEDTLS_NET_PROTO_UDP ? IPPROTO_UDP : IPPROTO_TCP;

  if(getaddrinfo(host, port, &hints, &list) != 0)
    return MBEDTLS_ERR_NET_UNKNOWN_HOST;

  /* Try the sockaddrs until a connection succeeds */
  ret = MBEDTLS_ERR_NET_UNKNOWN_HOST;
  for( current = list; current != NULL; current = current->ai_next)
  {
    ctx->fd = (int) socket(current->ai_family, current->ai_socktype, current->ai_protocol);
    if(ctx->fd < 0)
    {
      ret = MBEDTLS_ERR_NET_SOCKET_FAILED;
      continue;
    }

    if(connect(ctx->fd, current->ai_addr, (uint32_t)current->ai_addrlen) == 0)
    {
      ret = 0;
      break;
    }

    close( ctx->fd );
    ret = MBEDTLS_ERR_NET_CONNECT_FAILED;
  }

  freeaddrinfo(list);

  return ret;
}

/*
 * Create a listening socket on bind_ip:port
 */
int mbedtls_net_bind( mbedtls_net_context *ctx, const char *bind_ip, const char *port, int proto )
{
  /* Implementation not required for this application */
  mbedtls_printf ("%s() NOT IMPLEMENTED!\n", __FUNCTION__);

  return 0;
}

/*
 * Accept a connection from a remote client
 */
int mbedtls_net_accept( mbedtls_net_context *bind_ctx,
                        mbedtls_net_context *client_ctx,
                        void *client_ip, size_t buf_size, size_t *ip_len )
{
  /* Implementation not required for this application */
  mbedtls_printf ("%s() NOT IMPLEMENTED!!\n", __FUNCTION__);
  return 0;
}

/*
 * Set the socket blocking or non-blocking
 */
int mbedtls_net_set_block( mbedtls_net_context *ctx )
{
  /* Implementation not required for this application */
  mbedtls_printf ("%s() NOT IMPLEMENTED!!\n", __FUNCTION__);
  return 0;
}

int mbedtls_net_set_nonblock( mbedtls_net_context *ctx )
{
   /* Implementation not required for this application */
  mbedtls_printf ("%s() NOT IMPLEMENTED!!\n", __FUNCTION__);
  return 0;
}

/*
 * Portable usleep helper
 */
void mbedtls_net_usleep( unsigned long usec )
{
  /* Implementation not required for this application */
  mbedtls_printf ("%s() NOT IMPLEMENTED!!\n", __FUNCTION__);
}

/*
 * Read at most 'len' characters
 */
int mbedtls_net_recv( void *ctx, unsigned char *buf, size_t len )
{
  int32_t ret;
  int32_t fd = ((mbedtls_net_context *) ctx)->fd;

  if( fd < 0 )
  {
    return MBEDTLS_ERR_NET_INVALID_CONTEXT;
  }
 
  ret = (int32_t) read( fd, buf, len );

  if( ret < 0 )
  {
    if(net_would_block(ctx) != 0)
    {
      return MBEDTLS_ERR_SSL_WANT_READ;
    }
    
    if(errno == EPIPE || errno == ECONNRESET)
    {
      return MBEDTLS_ERR_NET_CONN_RESET;
    }

    if(errno == EINTR)
    {
      return MBEDTLS_ERR_SSL_WANT_READ;
    }

    return MBEDTLS_ERR_NET_RECV_FAILED;
  }

  return ret;
}

/*
 * Read at most 'len' characters, blocking for at most 'timeout' ms
 */
int mbedtls_net_recv_timeout( void *ctx, unsigned char *buf, size_t len,
                      uint32_t timeout )
{
  return mbedtls_net_recv( ctx, buf, len );
}


static int net_would_block( const mbedtls_net_context *ctx )
{
  /*
   * Never return 'WOULD BLOCK' on a non-blocking socket
   */
  int val = 0;
  UNUSED(val);
  
  if( ( fcntl( ctx->fd, F_GETFL, val) & O_NONBLOCK ) != O_NONBLOCK )
    return( 0 );

  switch( errno )
  {
#if defined EAGAIN
    case EAGAIN:
#endif
#if defined EWOULDBLOCK && EWOULDBLOCK != EAGAIN
    case EWOULDBLOCK:
#endif
    return( 1 );
  }

  return( 0 );
}

/*
 * Write at most 'len' characters
 */
int mbedtls_net_send( void *ctx, const unsigned char *buf, size_t len )
{
  int32_t ret;
  int fd = ((mbedtls_net_context *) ctx)->fd;

  if( fd < 0 )
  {
    return MBEDTLS_ERR_NET_INVALID_CONTEXT;
  }
  
  ret = (int32_t) write(fd, buf, len);

  if( ret < 0 )
  {
    if(net_would_block(ctx) != 0)
    {
      return MBEDTLS_ERR_SSL_WANT_WRITE;
    }
    
    if(errno == EPIPE || errno == ECONNRESET)
    {
      return MBEDTLS_ERR_NET_CONN_RESET;
    }
    
    if(errno == EINTR)
    {
      return MBEDTLS_ERR_SSL_WANT_WRITE;
    }

    return MBEDTLS_ERR_NET_SEND_FAILED;
  }

  return ret;
}

/*
 * Gracefully close the connection
 */
void mbedtls_net_free( mbedtls_net_context *ctx )
{
  if( ctx->fd == -1 )
    return;

  //shutdown( ctx->fd, 2 );
  close( ctx->fd );

  ctx->fd = -1;
 }

#endif /* MBEDTLS_NET_C */
