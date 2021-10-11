#include "hash_tables.h"
/**
 * hash_table_set - create new element
 * @ht: Default hash table
 * @key: Key
 * @value: add element
 * Return: 1 if a node is created successfully, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *hash_node = NULL;

	unsigned long int key_idx;
	/*Create a pointers copy*/
	char *new_key = NULL;
	char *new_value = NULL;

	if (!ht || !key || !(ht->array))
		return (0);
	/*Got index*/
	key_idx = key_index((const unsigned char *)key, ht->size);
	/*make a copy*/
	new_value = strdup((value));
	/*Access to key*/
	hash_node = ht->array[key_idx];
	/*Validate if specific idx exist and compare two keys*/
	while (hash_node)
	{
		if (strcmp(hash_node->key, key) == 0)
		{
			free(hash_node->value);
			hash_node->value = new_value;
			return (1);
		}
		hash_node = hash_node->next;
	}
	new_node = malloc(sizeof(hash_table_t));
	if (new_node == NULL)
	{
		free(new_value);
		return (0);
	}
	new_key = strdup(key);
	new_node->key = new_key;
	new_node->value = new_value;
	new_node->next = ht->array[key_idx];
	ht->array[key_idx] = new_node;

	return (1);
}
