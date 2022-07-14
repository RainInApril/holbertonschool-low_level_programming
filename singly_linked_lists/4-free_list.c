#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to list_t list
 * Return: void
 */

void free_list(list_t *head)
{
	/* creates a temporary node */
	list_t *tmp;

	/* checks to see whether head is equals to NULL */
	while (head != NULL)
	{
		/* assigns the value of next to tmpNode */
		tmp = head->next;
		/* frees the elements needed to be freed in head */
		free(head->str);
		/* frees the head node */
		free(head);
		/* head becomes tmpNode */
		head = tmp;
	}
}
