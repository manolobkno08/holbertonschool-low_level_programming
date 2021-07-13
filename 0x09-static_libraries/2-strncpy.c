#include "holberton.h"

/**
 *_strncpy - copia strings
 *@dest: variable puntero char
 *@src: variable puntero char
 *@n: variable de numero maximo
 *Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
