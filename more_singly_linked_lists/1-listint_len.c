#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a list_t list
 * @h: pointer to listint_t list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	/* counts the number of nodes */
	int count = 0;

	/* checks whether h pointer is pointing to a node */
	while (h != NULL)
	{
		/* h is assigned the address of the next node */
		h = h->next;
		/* counts the number of node */
		count = count + 1;
	}
	/* return the number of node */
	return (count);
}
