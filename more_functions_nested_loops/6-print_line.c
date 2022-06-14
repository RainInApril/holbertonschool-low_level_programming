#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the int being checked
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			_putchar('_');
			i = i + 1;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
