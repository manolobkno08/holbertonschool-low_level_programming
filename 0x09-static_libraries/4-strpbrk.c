#include "holberton.h"

/**
 *_strpbrk - funcion que localiza la primera aparicion de un string
 *@s: variable puntero char
 *@accept: variable puntero char
 *Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
