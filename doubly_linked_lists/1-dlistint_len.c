#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to dlistint_t list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
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
