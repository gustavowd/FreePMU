/*
 * tls_server_utils.h
 *
 *  Created on: 11 de jan de 2018
 *      Author: Matheus K. Ferst
 */

#ifndef TLS_SERVER_UTILS_H_
#define TLS_SERVER_UTILS_H_

#include "tls_common_utils.h"

struct tls_server {
	mbedtls_net_context sock;
	struct tls_context tls;
	struct tls_connection con;
};

int tls_server_init(struct tls_server *srv);
int tls_server_start(struct tls_server *srv, const char *addr, int port);
int tls_accept(struct tls_server *srv);
int tls_server_get_fd(struct tls_server *srv);
void tls_server_free(struct tls_server *srv);

#endif /* TLS_SERVER_UTILS_H_ */
