#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer of pointer to listint_t list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	/* creates a temporary node */
	listint_t *tmp;

	/* checks whether head == NULL */
	if (head == NULL)
		return;

	/* checks whether *head is not equals to NULL */
	while (*head != NULL)
	{
		/* assigns the value of *head to tmp */
		tmp = *head;
		/* assigns the value of next node of *head to *head */
		*head = (*head)->next;
		/* frees the tmp */
		free(tmp);
	}
	/* sets head to NULL */
	head = NULL;
	/* frees the head node*/
	free(head);
}
