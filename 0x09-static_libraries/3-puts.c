#include "holberton.h"

/**
 *_puts - funcion que muestra los caracteres
 *@str: variable puntero char
 *
 *Return: Always 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar(10);

}
