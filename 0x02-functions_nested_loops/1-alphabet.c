#include "holberton.h"

/**
 *print_alphabet - loop alfabeto de A - Z
 *
 *Return: Always 0
 */

void print_alphabet(void)
{
	int alp = 'a';

	for (alp = 'a'; alp <= 'z'; alp++)
	{

		_putchar(alp);

	}

	_putchar('\n');

}
