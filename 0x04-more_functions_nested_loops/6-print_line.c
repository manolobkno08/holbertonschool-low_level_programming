#include "holberton.h"

/**
 * print_line - imprime "_" n para crear una linea
 * @n: numero de caracteres a dibujar
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}
