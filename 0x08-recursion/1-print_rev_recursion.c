#include "holberton.h"

/**
*_print_rev_recursion - funcion que muestra un string en reversa
*@s: parametro puntero char que recibe funcion
*Return: Always 0
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
