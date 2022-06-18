#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string being cheked
 * @accept: the string s is trying to find a match
 * Return: returns a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (0);
}
