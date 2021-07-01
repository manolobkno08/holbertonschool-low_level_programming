#include "holberton.h"

/**
 *puts_half - funcion que muestra la mitad de una cadena
 *@str: variable puntero char
 *
 *Return: Always 0
 */

void puts_half(char *str)
{
	int i;
	int lenght;

	for (i = 0; str[i]; i++)
	;


	if ((i % 2) == 0)
	{
		for (lenght = i / 2; lenght < i; lenght++)
		{

			_putchar(str[lenght]);
		}
	}

	else
	{

		for (lenght = (i + 1) / 2; lenght < i; lenght++)
		{
			_putchar(str[lenght]);
		}
	}

	_putchar(10);


}
