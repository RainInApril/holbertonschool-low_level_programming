#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to listint_t list
 * Return: void
 */

void free_listint(listint_t *head)
{
	/* creates a temporary node */
	listint_t *tmp;

	/* checks to see whether head is equals to NULL */
	while (head != NULL)
	{
		/* assigns the value of next to tmpNode */
		tmp = head->next;
		/* frees the head node */
		free(head);
		/* head becomes tmpNode */
		head = tmp;
	}
}
