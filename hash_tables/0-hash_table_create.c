#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 * or NULL if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(*table));
	if (table == NULL)
		return (NULL);
	table->size = size;
	/* assigns memory space for the array */
	table->array = malloc(sizeof(table->array) * size);
	if (table->array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		/* creates a table according to the size given */
		table->array[i] = NULL;
		i = i + 1;
	}
	return (table);
}
