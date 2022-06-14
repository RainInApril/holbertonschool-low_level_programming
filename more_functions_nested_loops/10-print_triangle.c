#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int row, space, hash;

	for (row = 1; row <= size; row++)
	{	
		for (space = 1; space <= (size - row); space++)
		{
			_putchar(' ');
		}
		for (hash = 1; hash <= row; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
