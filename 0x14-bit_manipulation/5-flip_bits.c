#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: number to be flipped
 * @m: number to be flipped to
 * Return: number of bits required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index = 0;
	unsigned long int i;
	
	i = n ^ m;
	while (i != 0)
	{
		if ((i & 1) == 1)
			index++;
		i = i >> 1;
	}
	return (index);
}
