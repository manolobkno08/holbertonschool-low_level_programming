#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 * @n: variable que contiene la letra.
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		n--;
		printf("%d, ", n);
	}

	while (n < 98)
	{
		n++;
		printf("%d, ", n);
	}

	_putchar('\n');
}
