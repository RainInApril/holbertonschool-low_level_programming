#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to listint_t list
 * Return: sum of all the data (n) of a listint_t linked list
 * 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	/* returns 0 if head == NULL/list is empty */
	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		/* assigns the value of n from head node + sum to sum */
		sum = sum + head->n;
		/* head becomes the next node */
		head = head->next;
	}
	/* returns the sum of all the data */
	return (sum);
}
