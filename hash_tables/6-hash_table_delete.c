#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *node;
	unsigned long int index = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			node = ht->array[index];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
		index = index + 1;
	}
	free(ht->array);
	free(ht);
}
