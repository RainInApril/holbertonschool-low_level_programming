#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination of the memory being copied
 * @src: the source of the memory
 * @n: the bytes being copied from src
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}
