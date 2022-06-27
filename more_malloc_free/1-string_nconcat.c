#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string being checked
 * Return: returns the length of a string
 */

unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: one of the string to be concatenated
 * @s2: another string to be conatenated
 * @n: the bytes of s2
 * Return: returns pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int lens1, lens2;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	if (n >= lens2)
		n = lens2;

	ptr = malloc(sizeof(char) * (lens1 + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lens1; i++)
	 	ptr[i] = s1[i];
	for (i = lens1; j < n; i++)
	{
		ptr[i] = s2[j];
		j++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
