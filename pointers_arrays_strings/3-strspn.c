#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: consist only of bytes from accept
 * @accept: string to be checked against s
 * Return: returns the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
