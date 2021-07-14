#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copiar un string a una nueva ubicacion de memoria
 * @str: string a copiar
 * Return: puntero a string duplicado
 */

char *_strdup(char *str)
{
	char *duplicate;

	unsigned int i, j;

	if (str == 0)
		return (NULL);

	for (i = 0; str[i]; i++)
		;
	i++;

	duplicate = malloc(i * sizeof(char));

	if (duplicate == 0)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		duplicate[j] = str[j];
	}

	return (duplicate);
}
