#include "holberton.h"

/**
 *_memset - llena bloques de memoria con un valor particular
 *@s: variable puntero char
 *@b: variable o valor a rellenar
 *@n: numero de bytes a ser rellenados
 *Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
