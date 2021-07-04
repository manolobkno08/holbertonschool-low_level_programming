#include "holberton.h"

/**
 *rot13 - funcion que cambia el string a modo root13
 *@s: variable puntero char
 *
 *Return: Always 0
 */

char *rot13(char *s)
{
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char remp[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int count;
	int i;

	count = 0;

	while (s[count])
	{
		for (i = 0; i < 52; i++)
		{
			if (s[count] == letters[i])
			{
				s[count] = remp[i];
				break;
			}
		}

		count++;
	}

	return (s);
}
