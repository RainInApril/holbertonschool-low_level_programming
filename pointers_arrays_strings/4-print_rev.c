#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: the string being counted for length
 * Return: the string's length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * print_rev - prints a string, inr reverse
 * @s: the string being reversed
 */

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
