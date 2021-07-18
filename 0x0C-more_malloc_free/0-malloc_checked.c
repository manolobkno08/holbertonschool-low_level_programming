#include "holberton.h"

/**
 * malloc_checked - funcion crea un espacio dinamico
 * @b: tamaño de dato que recibe funcion
 * Return: c
 */

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (!c)
	{
		exit(98);
	}

	return (c);
}
