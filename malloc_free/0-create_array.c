#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char
 * @size: the size of the array
 * @c: the char initialise the array
 * Return: returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size == 0)
	{
		return (NULL);
	}

	j = (char *) malloc(sizeof(char) * size);

	if (j == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		j[i] = c;
		i = i + 1;
	}
	return (j);
}
