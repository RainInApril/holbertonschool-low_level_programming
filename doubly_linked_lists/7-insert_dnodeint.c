#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to dlistint_t list
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: data to be added to new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *newNode, *tmp;

	if (h == NULL)
		return (NULL);
	if (*h == NULL && idx > 0)
		return (NULL);
	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	tmp = *h;
	/* if index is 0 the new node becomes pointer to head */
	if (idx == 0)
	{
		newNode->next = tmp;
		newNode->prev = NULL;
		/* new node becomes tmp's prev is tmp is not NULL */
		if (tmp != NULL)
			/* tmp becomes the node after new node */
			tmp->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	/* while tmp is not the tail node, do: */
	while (tmp != NULL)
	{
		if (count + 1 == idx)
		{
			newNode->next = tmp->next;
			newNode->prev = tmp;
			tmp->next = newNode;
			if (newNode->next != NULL)
				newNode->next->prev = newNode;
			return (newNode);
		}
		tmp = tmp->next;
		count = count + 1;
	}
	return (NULL);
}
