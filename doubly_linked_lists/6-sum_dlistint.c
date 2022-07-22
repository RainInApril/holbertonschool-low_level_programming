#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: pointer to dlistint_t list
 * Return: sum of all the data (n) of a dlistint_t linked list
 * 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* returns 0 if head is NULL */
	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		/* adds data n to sum */
		sum = sum + head->n;
		/* next node becomes head until head is NULL */
		head = head->next;
	}
	return (sum);
}
