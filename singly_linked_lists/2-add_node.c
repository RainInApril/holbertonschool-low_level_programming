#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to list_t list
 * @str: string to be assigned to new node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	/* creates a pointer to to head pointer */
	list_t *newNode;

	/* allocates a memory space for the new node */
	newNode = malloc(sizeof(*newNode));
	/*checks whether the node is empty */
	if (newNode == NULL)
		return (NULL);
	/* str needs to be duplicated */
	newNode->str = strdup(str);
	/* needs to check for length of the duplicated str */
	newNode->len = strlen(str);
	/* makes the new node points to the next node */
	/* which is also the original head node */
	newNode->next = *head;
	/* change the new node to head node */
	*head = newNode;
	return (newNode);
}
