#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer of pointer to listint_t list
 * Return: returns the head node’s data (n), 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	/* assigns the value of *head to tmp */
	/* so it becomes the *head node */
	tmp = *head;
	/* checks whether linked list is empty */
	if (tmp == NULL)
		return (0);
	/* assigns the value of *head->next to *head */
	/* so *head becomes the next node */
	*head = tmp->next;
	/* assgins the value of *tmp->n to n */
	n = tmp->n;
	/* deletes *tmp as it is noe the head node */
	free(tmp);
	/* returns the value of n */
	return (n);
}
