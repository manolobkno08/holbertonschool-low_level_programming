#include "function_pointers.h"

/**
 * print_name - funcion imprimir nombre
 *@name: puntero nombre
 *@f: puntero f
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
