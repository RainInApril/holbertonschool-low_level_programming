#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string being checked and printed
 * Return: void
 */

void puts_half(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	len = i;
	i = 0;
	while (i < len)
	{
		if (i > (len - 1) / 2)
		{
			_putchar(str[i]);
		}
		i = i + 1;
	}
	_putchar('\n');
}
