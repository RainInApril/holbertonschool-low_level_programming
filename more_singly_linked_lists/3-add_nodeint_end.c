#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer of pointer to listint_t list
 * @n: the int to be included in new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* create a new node */
	listint_t *newNode, *lastNode;

	/* allocate a memory space for the new node */
	newNode = malloc(sizeof(*newNode));
	/*checks whether the node is empty */
	if (newNode == NULL)
		return (NULL);
	/* assigns the value of n to n in newNode */
	newNode->n = n;
	/* assigns NULL to new node */
	newNode->next = NULL;

	/* if head node is NULL, make the new node as head */
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	/* otherwise, find the last node and add the new node */
	else
	{
		lastNode = *head;
		/* iterate the linked list until it reaches NULL */
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
	}
	/* add the newNode at the end of the linked list */
	lastNode->next = newNode;
	return (newNode);
}
