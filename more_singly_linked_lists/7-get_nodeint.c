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

	/* increments n until it matches index */
	while (n < index)
	{
		/* assigns next node to the head node */
		/* so it becomes the next node */
		head = head->next;
		/* increments n until n == index */
		n = n + 1;
		/* returns NULL if node doesn't exist */
		if (head == NULL)
			return (NULL);
	}
	/* returns the node */
	return (head);
}
