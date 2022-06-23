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
	int lens1, lens2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL && s1 != NULL)
		s2 = "";

	lens1 = _strlen(s1);
	lens2 = _strlen(s2) + 1;

	ptr = malloc(sizeof(*ptr) * (lens1 + lens2));
	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
