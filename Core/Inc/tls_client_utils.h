/*
 * tls_client_utils.h
 *
 *  Created on: 12 de abr de 2018
 *      Author: Matheus K. Ferst
 */

#ifndef TLS_CLIENT_UTILS_H_
#define TLS_CLIENT_UTILS_H_

#include "tls_common_utils.h"

struct tls_client {
	struct tls_context tls;
	struct tls_connection con;
};

int tls_client_init(struct tls_client *cli);
int tls_client_connect(struct tls_client *cli, const char *addr, int port);
void tls_client_free(struct tls_client *cli);

#endif /* TLS_CLIENT_UTILS_H_ */
