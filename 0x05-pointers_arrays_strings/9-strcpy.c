#include "holberton.h"

/**
 *_strcpy - copia la cadena incluyendo el valor null
 *@dest: variable puntero char
 *@src: variable puntero char
 *Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
