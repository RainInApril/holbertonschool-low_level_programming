#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list_t list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	/* counts the number of nodes */
	int count = 0;

	/* checks whether h pointer is pointing to a node */
	while (h != NULL)
	{
		/* checks whether the str in the node h pointer is pointing to has value */
		if (h->str == NULL)
			printf("[0] (nil)\n");

		/* prints the value in len and str the h pointer is pointing to */
		else
			printf("[%d] %s\n", h->len, h->str);

		/* h is assigned the address of the next node */
		h = h->next;
		/* counts the number of node */
		count = count + 1;
	}
	/* return the number of node */
	return (count);
}
