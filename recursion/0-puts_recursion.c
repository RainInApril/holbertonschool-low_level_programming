#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the char to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s = s + 1;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
