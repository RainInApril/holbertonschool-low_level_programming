#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: another string to be compared
 * Return:  0 if the strings are the same, else if different
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		*s1 = *s1 + 1;
		*s2 = *s2 + 1;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
