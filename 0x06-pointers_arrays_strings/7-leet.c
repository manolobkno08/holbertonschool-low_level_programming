#include "holberton.h"

/**
 *leet - funcion
 *@s: variable puntero char
 *
 *Return: Always 0
 */

char *leet(char *s)
{
	int mayus[] = {65, 69, 79, 84, 76};
	int minus[] = {97, 101, 111, 116, 108};

	int remp[] = {52, 51, 48, 55, 49};

	int i;
	int j;

	i = 0;


	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == mayus[j] || s[i] == minus[j])
			{
				s[i] = remp[j];

				break;
			}
		}

		i++;
	}

	return (s);

}
