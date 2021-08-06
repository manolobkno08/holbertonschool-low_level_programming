#include "main.h"

/**
* binary_to_uint - convert a binary number to unsigned int
* @b: char pointer
* Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		r <<= 1;
		if (b[i] == '1')
			r = r + 1;
	}

	return (r);
}
