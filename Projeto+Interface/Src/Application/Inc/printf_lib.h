/*
 * printf.h
 *
 *  Created on: 06/10/2011
 *      Author: gustavo
 */

#ifndef PRINTF_LIB_H_
#define PRINTF_LIB_H_

void printf_install_putchar(char (*_putchar_func)(char));
int printf_lib(const char *format, ...);
void puts_lib(char **str, char* s);
int sprintf_lib(char *out, const char *format, ...);
int snprintf_lib( char *buf, unsigned int count, const char *format, ... );

#endif /* PRINTF_H_ */
