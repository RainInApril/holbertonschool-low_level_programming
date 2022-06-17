#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the string being reversed
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

void print_rev(char *s)
{
	int i = 0;
	i = _strlen(s) - 1;
	
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
