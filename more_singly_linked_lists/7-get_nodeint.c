#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to listint_t list
 * @index: the index of the node, starting at 0
 * Return: returns the nth node of a linked list,
 * NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	/* if index is 0 returns head */
	if (index == 0)
		return (head);
	/* checks whether head is NULL */
	while (head != NULL)
	{
		/* increments n until it matches the index */
		if (n < index)
		{
			/* head becomes the next node */
			head = head->next;
			n = n + 1;
		}
		/* returns head when n == index */
		return (head);
	}
	/* returns NULL if node doesn't exist */
	return (NULL);
}
