#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct print - estructura que imprime de acuerdo al caso.
 * @t: tipo de impresion
 * @f: funcion que imprime
 */

typedef struct print
{
	char *t;
	void (*f)(va_list);

} print_t;


void print_char(va_list c);
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list c);

void print_int(va_list i);

void print_float(va_list f);

void print_string(va_list s);

#endif
