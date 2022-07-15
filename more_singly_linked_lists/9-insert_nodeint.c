#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer of pointer to listint_t list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: data in node
 * Return: the address of the new node, or NULL if it failed
 * NULL if it is not possible to add the new node at index idx
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *newNode;
	unsigned int i = 0;

	if (*head == NULL && idx > 0)
		return (NULL);

	newNode = malloc(sizeof(*newNode));
	/* returns NULL if newNode == NULL */
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	/* if index is 0 new node replaces *head: */
	if (idx == 0)
	{
		/* pointer head replaces NULL in new node */
		newNode->next = *head;
		/* newNode becomes *head */
		*head = newNode;
		return (*head);
	}
	tmp = *head;
	/* looks for the given position and inserts a new node */
	while (tmp != NULL)
	{
		if (i == idx - 1)
		{
			/* assigns the value from tmp->next to newNode->next */
			newNode->next = tmp->next;
			/* assigns the datas from newNode to tmp->next */
			tmp->next = newNode;
			return (newNode);
		}
		else
			/* next node of tmp(*head) becomes tmp(*head) */
			tmp = tmp->next;
		i = i + 1;
	}
	/* returns NULL if failed */
	return (NULL);
}
