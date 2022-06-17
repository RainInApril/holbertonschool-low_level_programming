#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the pointer to the string being printed
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i = i + 1;
	}
	_putchar('\n');
}
