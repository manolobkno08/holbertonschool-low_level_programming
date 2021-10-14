#include "main.h"

/**
 * _isdigit - chequea del 0 al 9
 * @c: digito a revisar
 * Return: always 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
