#include "variadic_functions.h"

/**
 * print_strings - lista strings
 *@separator: caracter separador entre datos
 *@n: cantidad de parametros que recibe la func
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *array;

	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		array = va_arg(string, char*);

		if (array == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", array);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	putchar('\n');

	va_end(string);
}
