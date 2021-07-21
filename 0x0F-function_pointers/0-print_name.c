#include "function_pointers.h"

/**
 * print_name - imprime nombre
 * @name: nombre a imprimir
 * @f: funcion para imprimir
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
