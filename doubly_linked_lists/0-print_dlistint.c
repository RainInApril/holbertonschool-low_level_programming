#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to dlistint_t list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	/* counts the number of nodes */
	int count = 0;

	/* checks whether h pointer is pointing to a node */
	while (h != NULL)
	{
		/* prints the value n the h pointer is pointing to */
		printf("%d\n", h->n);

		/* h is assigned the address of the next node */
		h = h->next;
		/* counts the number of node */
		count = count + 1;
	}
	/* return the number of node */
	return (count);
}
