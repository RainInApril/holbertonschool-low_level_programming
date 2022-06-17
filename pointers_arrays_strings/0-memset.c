#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: source variable
 * @b: constant byte b
 * @n: bytes of memory
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i = i + 1;
	}
	return (s);
}
