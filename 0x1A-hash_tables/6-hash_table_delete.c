#include "hash_tables.h"
/**
 * hash_table_delete - Delete hash table
 * @ht: Default hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hash_node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		hash_node = ht->array[i];

		if (hash_node)
		{
			free_list(hash_node);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * free_list - Free list
 * @head: Default hash table
 */
void free_list(hash_node_t *head)
{
	if (!head)
		return;
	else if (head->next)
	{
		free_list(head->next);
	}
	free(head->value);
	free(head->key);
	free(head);
}
