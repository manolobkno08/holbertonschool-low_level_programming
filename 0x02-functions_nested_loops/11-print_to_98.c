#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 * @n: variable que contiene la letra.
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int cont;

	for (cont = n; cont >= 98; cont--)
	{
		printf("%d, ", cont);
	}

	for (cont = n; cont <= 98; cont++)
	{
		printf("%d, ", cont);
	}

	_putchar('\n');
}
