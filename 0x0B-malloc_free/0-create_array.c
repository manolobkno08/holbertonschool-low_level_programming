#include "holberton.h"

/**
 * create_array - funcion crear array
 * @size: tamaño array
 * @c: var tipo char
 * Return: p
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	unsigned int count;

	p = malloc(size * sizeof(*p));

	if (p == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (count = 0; count < size; count++)
		{
			p[count] = c;
		}
	}

	return (p);
}
