#include "holberton.h"

/**
 *_memcpy - funcion que copia un area de memoria
 *@dest: variable puntero char
 *@src: variable puntero char
 *@n: numero de bytes
 *Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	unsigned int i;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];

	return (cdest);
}
