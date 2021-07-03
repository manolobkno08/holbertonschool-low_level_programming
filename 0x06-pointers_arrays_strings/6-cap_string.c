#include "holberton.h"

/**
 *cap_string - funcion que muestra los caracteres de dos en dos
 *@s: variable puntero char
 *
 *Return: Always 0
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{

		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;

		if (s[i - 1] == ' ' ||
			s[i - 1] == '\n' ||
			s[i - 1] == '\t' ||
			s[i - 1] == ',' ||
			s[i - 1] == '.' ||
			s[i - 1] == '!' ||
			s[i - 1] == '?' ||
			s[i - 1] == '"' ||
			s[i - 1] == '(' ||
			s[i - 1] == ')' ||
			s[i - 1] == '{' ||
			s[i - 1] == '}' ||
			i == 0)

			s[i] -= 32;
		i++;

	}


	return (s);
}
