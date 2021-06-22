#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int a;

	int ini = 1;

	while (ini <= 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		
		_putchar('\n');
		ini++;
	}
}
