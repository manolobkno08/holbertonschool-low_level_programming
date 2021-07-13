#include "holberton.h"

/**
 *_strcat - concatena dos cadenas con valor null
 *@dest: variable puntero char
 *@src: variable puntero char
 *Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	char *q;
	char *p;

	for (q = dest; *q != '\0'; q++)
	;

	for (p = src; *p != '\0'; p++, q++)
		*q = *p;

	*q = '\0';

	return (dest);
}
