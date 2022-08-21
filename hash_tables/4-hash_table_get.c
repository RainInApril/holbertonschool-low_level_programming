#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *temp;

	if (ht == NULL || key[0] == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(key, (const char *)temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
