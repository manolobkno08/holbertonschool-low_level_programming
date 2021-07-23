#include "variadic_functions.h"

/**
 * print_numbers - lista de argumentos
 *@separator: caracter separador entre datos
 *@n: cantidad de parametros que recibe la func
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list data;

	va_start(data, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(data, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(data);
}
