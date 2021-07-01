#include "holberton.h"

/**
 *rev_string - funcion que reversa un string
 *@s: variable puntero char
 *
 *Return: Always 0
 */

void rev_string(char *s)
{
	int i;
	int j;
	int k;

	char temp;

	for (i = 0; s[i]; i++)
	;

	k = i;

	for (i--, j = 0; j < k / 2; i--, j++)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
