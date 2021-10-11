#include "hash_tables.h"

/**
 * key_index - assign a key
 * @key: new key
 * @size: size of array
 * Return: Index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	/*checking if key and size is null*/
	if (key == 0 || size == 0)
	{
		return (0);
	}

	/*Validate position of idx*/
	idx = hash_djb2(key) % size;

	return (idx);
}
