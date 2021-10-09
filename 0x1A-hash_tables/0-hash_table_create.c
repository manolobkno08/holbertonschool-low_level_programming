#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table
 * @size: Size of array
 * Return: New hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/*Create memory space for hash table*/
	hash_table_t *hs = NULL;
	hs = malloc(sizeof(hash_table_t));
	if (hs == NULL)
		return NULL;

	/*Create memory space for array*/
	hs->array = calloc(size, sizeof(hash_table_t *));
	if (!hs->array)
	{
		free(hs);
		hs = NULL;
		return NULL;
	}

	/*Return new hash table*/
	return hs;
}
