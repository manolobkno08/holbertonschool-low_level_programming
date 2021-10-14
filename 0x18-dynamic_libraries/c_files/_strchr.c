#include "main.h"

/**
 *_strchr - funcion que localiza un caracter en una cadena
 *@s: variable puntero char
 *@c: variable puntero char
 *Return: Always 0
 */

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}

		if (!*s)
		{
			return (NULL);
		}
	}

	return (NULL);
}
