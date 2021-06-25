#include "holberton.h"

/**
 * print_most_numbers - imprime de 0 a 9 y excluye 2 y 4
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
