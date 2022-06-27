#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum of the array
 * @max: the maximum of the array
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int range, i, *ptr;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	ptr = malloc(sizeof(*ptr) * range);
	if (ptr == 0)
		return (NULL);

	i = 0;
	while (i < range)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
