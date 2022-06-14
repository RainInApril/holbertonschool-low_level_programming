#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			int j = 0;

			while (j < i)
			{
				_putchar(' ');
				j = j + 1;
			}
			_putchar('\\');
			_putchar('\n');
			i = i + 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
