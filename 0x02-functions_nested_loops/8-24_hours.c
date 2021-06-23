#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int horas;
	int minutos;

	for (horas = 0; horas < 24; horas++)
	{
		for (minutos = 0; minutos < 60; minutos++)
		{
			_putchar((horas / 10) + '0');
			_putchar((horas % 10) + '0');
			_putchar(':');
			_putchar((minutos / 10) + '0');
			_putchar((minutos % 10) + '0');
			_putchar('\n');
		}
	}
}
