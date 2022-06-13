#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 */

void print_numbers(void)
{
	int i = '0';

	for (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
