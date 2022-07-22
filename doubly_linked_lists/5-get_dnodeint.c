#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to dlistint_t list
 * @index: index of the node, starting from 0
 * Return: nth node of a dlistint_t linked list
 * NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	/* returns NULL if head is empty */
	if (head == NULL)
		return (NULL);
	/* returns head node if index is 0 */
	if (index == 0)
		return (head);
	/* increments count until it matches index */
	while (count < index)
	{
		/* next node of head becomes head */
		head = head->next;
		/* increments count */
		count = count + 1;
	}
	/* returns the node at index */
	return (head);
}
