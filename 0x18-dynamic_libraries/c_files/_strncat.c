#include "main.h"

/**
 *_strncat - concatena dos cadenas con un valor maximo
 *@dest: variable puntero char
 *@src: variable puntero char
 *@n: variable de numero maximo
 *Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}

	return (dest);
}
