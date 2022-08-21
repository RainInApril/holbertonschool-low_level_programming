#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int index = 0;
	char separator = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			if (separator == 1)
				printf(", ");

			node = ht->array[index];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			separator = 1;
		}
		index = index + 1;
	}
	printf("}\n");
}
