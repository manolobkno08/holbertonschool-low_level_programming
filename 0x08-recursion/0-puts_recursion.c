#include "holberton.h"

/**
 *_puts_recursion - funcion que muestra un string + salto de linea
 *@s: parametro puntero char que recibe funcion
 *Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		return;
	}
	else
		_putchar(10);
}
