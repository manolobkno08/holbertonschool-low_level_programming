#include "main.h"

/**
* set_bit - return bit of a given index
* @n: long int
* @index: unsigned int
* Return: bit
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 64;

	if (index > bit)
		return (-1);

	bit = 1 << index;
	*n = *n | bit;
	return (1);
}
