#include "holberton.h"

/**
 *string_toupper - cambia letras minusculas a mayusculas
 *@s: variable puntero char
 *Return: Always 0
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}

		i++;
	}

	return (s);
}
