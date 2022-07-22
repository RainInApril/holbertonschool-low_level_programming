#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to dlistint_t list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	/* frees every node until head is NULL */
	while (head != NULL)
	{
		/* head node becomes tmp */
		tmp = head;
		/* next node of head becomes head */
		head = head->next;
		/* frees tmp node */
		free(tmp);
	}
	/* frees the last node which is head */
	free(head);
}
