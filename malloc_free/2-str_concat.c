#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
 * str_concat - concatenates two strings
 * @s1: one of the string to be concatenated
 * @s2: another string to be conatenated
 * Return: returns pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j;

	i = _strlen(s1);
	if (s1 == NULL)
	{
		i = 0;
	}

	j = _strlen(s2);
	if (s2 == NULL)
	{
		j = 0;
	}

	ptr = malloc(sizeof(char) * (i + j) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
