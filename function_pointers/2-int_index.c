#include "function_pointers.h"

/**
 * int_index - searches for an interger
 * @array: the array of intergers
 * @size: the size of the array
 * @cmp: the pointer to function to be used to compare values
 *
 * Return: returns -1 if no element matches
 * also return -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i = i + 1;
	}
	return (-1);
}
