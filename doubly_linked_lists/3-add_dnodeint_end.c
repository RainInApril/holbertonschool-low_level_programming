#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer of pointer to dlistint_t list
 * @n: int to be assigned to new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tmp;

	/* returns NULL if head is empty */
	if (head == NULL)
		return (NULL);
	/* allocate a memory space for the new node */
	newNode = malloc(sizeof(*newNode));
	/* checks whether the node is empty */
	if (newNode == NULL)
		return (NULL);
	/* assigns value n to new node */
	newNode->n = n;
	/* new node becomes pointer head */
	/* returns new node */
	/* if pointer head is NULL */
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	/* pointer head becomes tmp */
	tmp = *head;
	/* assigns the next node of tmp to tmp */
	/* while tmp's next node is not NULL */
	while (tmp->next != NULL)
		tmp = tmp->next;
	/* new node becomes the next node of tmp(*head) */
	tmp->next = newNode;
	/* tmp becomes the prev node of new node */
	newNode->prev = tmp;
	/* returns address of new node */
	return (newNode);
}
