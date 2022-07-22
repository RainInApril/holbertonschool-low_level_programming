#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list
 * @head: pointer of pointer to dlistint_t list
 * @index:  index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;
	while (index != count && tmp != NULL)
	{
		count = count + 1;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (-1);

	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;

	if (index == 0)
		*head = tmp->next;

	else
		tmp->prev->next = tmp->next;

	free(tmp);
	return (1);
}
