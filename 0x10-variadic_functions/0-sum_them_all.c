#include "variadic_functions.h"

/**
 * sum_them_all - suma de parametros
 *@n: cantidad de parametros que recibe la func
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int sum = 0;
	unsigned int i;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, unsigned int);
	}

	va_end(ap);

	return (sum);
}
