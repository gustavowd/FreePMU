/*
 * tls_common_utils.c
 *
 *  Created on: 11 de jan de 2018
 *      Author: Matheus K. Ferst
 */

#include <string.h>
#include "tls_common_utils.h"

int tls_connection_init(struct tls_connection *con)
{
	mbedtls_net_init(&con->sock);
	mbedtls_ssl_init(&con->ctx);
	return 0;
}

int tls_context_init(struct tls_context *ctx)
{
	int ret = 0;

	mbedtls_entropy_init(&ctx->entropy);
	mbedtls_ctr_drbg_init(&ctx->drbg);
	mbedtls_x509_crt_init(&ctx->cert);
	mbedtls_pk_init(&ctx->pk);
	mbedtls_ssl_config_init(&ctx->cfg);
	ret = mbedtls_ctr_drbg_seed(&ctx->drbg, mbedtls_entropy_func, &ctx->entropy, NULL, 0);

	return ret;
}

int tls_cert_load(struct tls_context *ctx, const char *cert, const char *ca, const char *key, const char *pass)
{
	int ret = 0;

	if(cert)
		ret |= mbedtls_x509_crt_parse(&ctx->cert, cert, strlen(cert) + 1);

	if(ca) {
		ret |= mbedtls_x509_crt_parse(&ctx->cert, ca, strlen(ca) + 1);
		if(cert)
			mbedtls_ssl_conf_ca_chain(&ctx->cfg, ctx->cert.next, NULL);
		else
			mbedtls_ssl_conf_ca_chain(&ctx->cfg, &ctx->cert, NULL);
	}

	if(key)
		ret |= mbedtls_pk_parse_key(&ctx->pk, key, strlen(key) + 1, pass, pass?strlen(pass)+1:0);

	return ret;
}

void tls_connection_close(struct tls_connection *con)
{
    int ret;
    do {
        ret = mbedtls_ssl_close_notify(&con->ctx);
    }
    while(ret == MBEDTLS_ERR_SSL_WANT_READ || ret == MBEDTLS_ERR_SSL_WANT_WRITE);
}

void tls_connection_free(struct tls_connection *con)
{
	mbedtls_net_free(&con->sock);
	mbedtls_ssl_free(&con->ctx);
}

void tls_connection_reset(struct tls_connection *con)
{
	mbedtls_net_free(&con->sock);
	mbedtls_ssl_session_reset(&con->ctx);
}

void tls_context_free(struct tls_context *ctx)
{
	mbedtls_x509_crt_free(&ctx->cert);
	mbedtls_pk_free(&ctx->pk);
	mbedtls_ssl_config_free(&ctx->cfg);
	mbedtls_ctr_drbg_free(&ctx->drbg);
	mbedtls_entropy_free(&ctx->entropy);
}

int tls_write(struct tls_connection *con, const void *buf, size_t len)
{
	int ret;

	ret = mbedtls_ssl_write(&con->ctx, buf, len);

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

int tls_read(struct tls_connection *con, void *buf, size_t len)
{
	int ret;

	ret = mbedtls_ssl_read(&con->ctx, buf, len);

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

int tls_connection_get_fd(struct tls_connection *con)
{
	return con->sock.fd;
}

size_t tls_connection_avail_bytes(struct tls_connection *con)
{
	return mbedtls_ssl_get_bytes_avail(&con->ctx);
}
