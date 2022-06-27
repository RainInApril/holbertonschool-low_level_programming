#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in an array
 * @size: bytes of the array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = size * nmemb;
	ptr = malloc(j);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		ptr[i] = 0;
	return (ptr);
}
