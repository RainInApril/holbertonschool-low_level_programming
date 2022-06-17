#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: the string being appended
 * @dest: the string being overwritten
 * Return: returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a = a + 1;
	}

	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a = a + 1;
		b = b + 1;
	}
	dest[a] = '\0';
	return (dest);
}
