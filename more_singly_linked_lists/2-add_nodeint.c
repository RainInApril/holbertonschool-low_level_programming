#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer of pointer to listint_t list
 * @n: the int to be included in new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* creates a pointer to to head pointer */
	listint_t *newNode;

	/* allocates a memory space for the new node */
	newNode = malloc(sizeof(*newNode));
	/*checks whether the node is empty */
	if (newNode == NULL)
		return (NULL);
	/* assigns the value of n to n in newNode */
	newNode->n = n;
	/* makes the new node points to the next node */
	/* which is also the original head node */
	newNode->next = *head;
	/* change the new node to head node */
	*head = newNode;
	return (newNode);
}
