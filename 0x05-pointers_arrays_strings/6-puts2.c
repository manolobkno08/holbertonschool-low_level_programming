#include "holberton.h"

/**
 *puts2 - funcion que muestra los caracteres de dos en dos
 *@str: variable puntero char
 *
 *Return: Always 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);

	}
	_putchar(10);
}
