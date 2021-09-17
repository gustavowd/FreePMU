/*
 * tls_server_utils.c
 *
 *  Created on: 11 de jan de 2018
 *      Author: Matheus K. Ferst
 */

#include <stdio.h>
#include "tls_server_utils.h"

#if defined(MBEDTLS_DEBUG_C)
int printf_UART(const char *format, ...);
static void my_debug2(void *ctx, int level, const char *file, int line,
					 const char *str)
{
	const char *p, *basename;
	(void) ctx;

	/* Extract basename from file */
	for(p = basename = file; *p != '\0'; p++) {
		if(*p == '/' || *p == '\\') {
			basename = p + 1;
		}
	}

	printf_UART("%s:%04d: |%d| %s\n\r", basename, line, level, str);
}
#endif

int tls_server_init(struct tls_server *srv)
{
	int ret = 0;

	//mbedtls_net_init(&srv->sock);//
	ret |= tls_context_init(&srv->tls);

	tls_connection_init(&srv->con);
	mbedtls_ssl_setup(&srv->con.ctx, &srv->tls.cfg);

	ret |= mbedtls_ssl_config_defaults(&srv->tls.cfg, MBEDTLS_SSL_IS_SERVER, MBEDTLS_SSL_TRANSPORT_STREAM, MBEDTLS_SSL_PRESET_DEFAULT);
	mbedtls_ssl_conf_authmode(&srv->tls.cfg, MBEDTLS_SSL_VERIFY_REQUIRED);
	mbedtls_ssl_conf_rng(&srv->tls.cfg, mbedtls_ctr_drbg_random, &srv->tls.drbg);
	ret |= mbedtls_ssl_conf_own_cert(&srv->tls.cfg, &srv->tls.cert, &srv->tls.pk);

#if defined(MBEDTLS_DEBUG_C)
	mbedtls_ssl_conf_dbg(&srv->tls.cfg, my_debug2, NULL);
	mbedtls_debug_set_threshold(6);
#endif

	return ret;
}

int tls_server_start(struct tls_server *srv, const char *addr, int port)
{
	int ret = 0;
	char str_port[7];

	snprintf(str_port, 7, "%d", port);

	ret |= mbedtls_net_bind(&srv->sock, addr, str_port, MBEDTLS_NET_PROTO_TCP);

	return ret;
}

int tls_accept(struct tls_server *srv)
{
	int ret;

	if(srv->con.sock.fd != -1)
		return TLS_GENERIC_ERR;

	ret = mbedtls_net_accept(&srv->sock, &srv->con.sock, NULL, 0, NULL);
	if(ret) {
		tls_connection_init(&srv->con);
		return ret;
	}

	mbedtls_ssl_set_bio(&srv->con.ctx, &srv->con.sock, mbedtls_net_send, mbedtls_net_recv, NULL);

	ret = mbedtls_ssl_handshake(&srv->con.ctx);
	if(ret != 0 && ret != MBEDTLS_ERR_SSL_WANT_READ && ret != MBEDTLS_ERR_SSL_WANT_WRITE) {
		mbedtls_net_free(&srv->con.sock);
		mbedtls_ssl_session_reset(&srv->con.ctx);
		tls_connection_init(&srv->con);
	}

	switch(ret) {
		case MBEDTLS_ERR_SSL_WANT_READ:
			ret = TLS_WANT_READ;
			break;
		case MBEDTLS_ERR_SSL_WANT_WRITE:
			ret = TLS_WANT_WRITE;
			break;
	}

	return ret;
}

void tls_server_free(struct tls_server *srv)
{
	tls_context_free(&srv->tls);

	tls_connection_free(&srv->con);

	mbedtls_net_free(&srv->sock);
}

int tls_server_get_fd(struct tls_server *srv)
{
	return srv->sock.fd;
}
