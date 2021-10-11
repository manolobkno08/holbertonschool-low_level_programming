#include "hash_tables.h"
/**
 * hash_table_print - Print hash table
 * @ht: Default hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash_node;
	unsigned long int i;
	int flag = 1;

	if (!ht)
		return;

	putchar('{');

	for (i = 0; i < ht->size; i++)
	{
		hash_node = ht->array[i];

		while (hash_node)
		{
			if (flag == 0)
				printf(", ");

			printf("'%s': '%s'", hash_node->key, hash_node->value);
			hash_node = hash_node->next;

			flag = 0;
		}
	}
	printf("}");
	putchar(10);
}
