#include "variadic_functions.h"

/**
 * print_char - imprime un char
 * @c: parametro a imprimir
 * Return: void
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - imprime un entero
 * @i: entero a imprimir
 * Return: void
 */

void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - imprime un decimal
 * @f: decimal a imprimir
 * Return: void
 */

void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - imprime un string
 * @s: string a imprimir
 * Return: void
 */

void print_string(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - imprime cualquier cosa
 * @format: lista de tipo de argumentos pasados a la funcion
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;

	printf_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"f", print_float}
		{NULL, NULL}
	};

	va_list list;
	char *separator = "";

	va_start(list, format);

	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(list);
	printf("\n");
}
