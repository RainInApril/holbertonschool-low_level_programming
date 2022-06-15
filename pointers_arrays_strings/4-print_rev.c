#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string, in reverse
 * @s: the string being reversed
 * @_strlen: the function that returns the length of a string
 */

void print_rev(char *s)
{
	int i;
	int length = _strlen(s);

	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
