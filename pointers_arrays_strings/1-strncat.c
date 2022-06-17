#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the string being overwritten
 * @src: the string being appended
 * @n: bytes from src
 * Return: returns a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a = a + 1;
	}

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a = a + 1;
		b = b + 1;
	}
	return (dest);
}
