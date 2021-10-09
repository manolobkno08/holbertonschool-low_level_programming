#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table
 * @size: Size of array
 * Return: New hash
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/*Create memory space for hash table*/
	hash_table_t *hs = NULL;
	unsigned long int i;

	hs = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (hs == NULL)
		return (NULL);

	/*Create memory space for array*/
	hs->size = size;
	hs->array = malloc(sizeof(hash_node_t *) * size);
	if (!hs->array)
	{
		free(hs);
		hs = NULL;
		return (NULL);
	}

	/*Initialize nodes to 0*/
	for (i = 0; i < size; i++)
	{
		hs->array[i] = NULL;
	}

	return (hs);
}
