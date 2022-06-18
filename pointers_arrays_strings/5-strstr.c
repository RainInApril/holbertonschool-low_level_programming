#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be checked
 * @needle: the substring to be checked
 * Return: returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k = 0;
	char *pointer;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		k = i;
		j = 0;
		while (haystack[k] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				pointer = &haystack[i];
				return (pointer);
			}
			k = k + 1;
			j = j + 1;
		}
		i = i + 1;
	}
	return ('\0');
}
