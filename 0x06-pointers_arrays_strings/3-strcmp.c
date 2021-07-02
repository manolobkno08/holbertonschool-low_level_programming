#include "holberton.h"

/**
 *_strcmp - comparar strings
 *@s1: variable puntero char
 *@s2: variable puntero char
 *Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	for ( ; *s1 == *s2; s1++, s2++)

		if (*s1 == 0 && *s2 == 0)
		{
			return (0);
		}

	return (*s1 - *s2);
}
