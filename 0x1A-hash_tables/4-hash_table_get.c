#include "hash_tables.h"
/**
 * hash_table_get - Create new element
 * @ht: Default hash table
 * @key: Key
 * Return: value associated to key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash_node = NULL;
	unsigned long int key_idx;

	/*Validate*/
	if (!ht || !key || !(ht->array))
	{
		return (NULL);
	}

	/*Got idx key*/
	key_idx = key_index((const unsigned char *)key, ht->size);

	hash_node = ht->array[key_idx];
	while (hash_node)
	{
		if (strcmp(hash_node->key, key) == 0)
		{
			return (hash_node->value);
		}
		hash_node = hash_node->next;
	}
	return (NULL);
}
