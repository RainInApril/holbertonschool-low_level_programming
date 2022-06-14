#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 */

void print_square(int size)
{
		if (size > 0)
	{
		int i = 0;

		while (i < size)
		{
			int j = 0;

			while (j < size)
			{
				_putchar('#');
				j = j + 1;
			}
			_putchar('\n');
			i = i + 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
