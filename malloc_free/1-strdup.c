#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string being checked
 * Return: returns the length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the pointer to the string
 * Return: returns a pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = _strlen(str);

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	j = 0;

	while (j < i)
	{
		ptr[j] = str[j];
		j = j + 1;
	}
	return (ptr);
}
