#include "holberton.h"

/**
 *print_rev - funcion que muestra los caracteres en reversa
 *@s: variable puntero char
 *
 *Return: Always 0
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	{
		for (i--; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	}
	_putchar(10);
}
