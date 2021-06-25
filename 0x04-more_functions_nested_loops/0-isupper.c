#include "holberton.h"

/**
 * _isupper - revisa caracteres en mayuscula
 * @c: caracter a chequear
 * Return: always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);

	return (0);
}
