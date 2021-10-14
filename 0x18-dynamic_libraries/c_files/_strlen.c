#include "main.h"

/**
 *_strlen - funcion que muestra la longitud de una cadena
 *@s: variable puntero char
 *
 *Return: Always 0
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;

	return (i);
}
