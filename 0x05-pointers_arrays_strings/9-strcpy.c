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
	int n = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
