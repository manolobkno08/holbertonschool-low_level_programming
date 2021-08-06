#include "main.h"

/**
* get_bit - return bit of a given index
* @n: long int
* @index: unsigned int
* Return: bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	bit = (n >> index) & 1;

	if (index > 64)
		return (-1);
	else
		return (bit);
}
