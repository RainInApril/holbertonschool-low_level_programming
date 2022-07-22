#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer of pointer to dlistint_t list
 * @n: int to be assigned to new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	/* returns NULL if head is empty */
	if (head == NULL)
		return (NULL);
	/* allocates a memory space for the new node */
	newNode = malloc(sizeof(*newNode));
	/*checks whether the node is empty */
	if (newNode == NULL)
		return (NULL);
	/*assigns NULL to prev of new node */
	newNode->prev = NULL;
	/*aasigns value n to new node */
	newNode->n = n;
	/* assigns new node as pointer head's prev */
	/* to become the beginning of the list */
	/* if pointer head is not empty */
	if (*head != NULL)
		(*head)->prev = newNode;
	/* pointer head becomes next node of new node */
	newNode->next = *head;
	/* new node becomes pointer head */
	*head = newNode;
	/* returns address of the new element */
	return (newNode);
}
