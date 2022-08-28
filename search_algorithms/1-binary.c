#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 * returns -1 value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t idx, left, right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		idx = left;
		while (idx < right)
		{
			printf("%d, ", array[idx]);
			idx = idx + 1;
		}
		printf("%d\n", array[idx]);

		idx = (left + (right - left) / 2);
		if (value == array[idx])
			return (idx);
		else if (value < array[idx])
			right = idx - 1;
		else
			left = idx + 1;
	}
	return (-1);
}
