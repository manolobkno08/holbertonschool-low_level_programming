#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @n: variable que contiene la letra.
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int res;

	if (n < 0)
	{
		res = (n % 10) * -1;
		_putchar(res + '0');
		return (res);
	}
	else
	{
		res = n % 10;
		_putchar(res + '0');
		return (res);
	}
}
