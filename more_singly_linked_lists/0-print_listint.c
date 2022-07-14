#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to listint_t list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	/* counts the number of nodes */
	int count = 0;

	/* checks whether h pointer is pointing to a node */
	while (h != NULL)
	{
		/* prints the value in n that the h pointer is pointing to */
		printf("%d\n", h->n);
		 /* assigns h the address of the next node */
		h = h->next;
		/* counts the number of node */
		count = count + 1;
	}
	/* returns the number of node */
	return (count);
}
