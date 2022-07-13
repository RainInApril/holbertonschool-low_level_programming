#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to list_t list
 * @str: string to be assigned to new node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/* create a new node */
	list_t *newNode, *lastNode;

	/* allocate a memory space for the new node */
	newNode = malloc(sizeof(*newNode));
	/*checks whether the node is empty */
	if (newNode == NULL)
		return (NULL);
	/* str needs to be duplicated */
	newNode->str = strdup(str);
	/* needs to check for length of the duplicated str */
	newNode->len = strlen(str);
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
