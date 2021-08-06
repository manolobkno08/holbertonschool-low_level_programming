#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: long int pointer
* @index: unsigned int
* Return: bit
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = ~(1 << index);
	*n = *n & set;
	return (1);
}
