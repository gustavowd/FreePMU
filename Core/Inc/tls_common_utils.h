/*
 * tls_common_utils.h
 *
 *  Created on: 11 de jan de 2018
 *      Author: Matheus K. Ferst
 */

#ifndef TLS_COMMON_UTILS_H_
#define TLS_COMMON_UTILS_H_

#include <mbedtls/entropy.h>
#include <mbedtls/ctr_drbg.h>
#include <mbedtls/certs.h>
#include <mbedtls/x509.h>
#include <mbedtls/ssl.h>
#include <mbedtls/net_sockets.h>
#include <mbedtls/error.h>
#include <mbedtls/debug.h>

enum tls_error {
	TLS_GENERIC_ERR=-1,
	TLS_WANT_READ=-2,
	TLS_WANT_WRITE=-3
};

struct tls_context {
	mbedtls_entropy_context entropy;
	mbedtls_ctr_drbg_context drbg;
	mbedtls_x509_crt cert;
	mbedtls_pk_context pk;
	mbedtls_ssl_config cfg;
};

struct tls_connection {
	mbedtls_net_context sock;
	mbedtls_ssl_context ctx;
};

int tls_connection_init(struct tls_connection *con);
int tls_context_init(struct tls_context *ctx);
int tls_cert_load(struct tls_context *ctx, const char *cert, const char *ca, const char *key, const char *pass);
int tls_write(struct tls_connection *con, const void *buf, size_t len);
int tls_read(struct tls_connection *con, void *buf, size_t len);
void tls_connection_close(struct tls_connection *con);
void tls_connection_free(struct tls_connection *con);
void tls_connection_reset(struct tls_connection *con);
void tls_context_free(struct tls_context *ctx);
int tls_connection_get_fd(struct tls_connection *con);
size_t tls_connection_avail_bytes(struct tls_connection *con);

#endif /* TLS_COMMON_UTILS_H_ */
