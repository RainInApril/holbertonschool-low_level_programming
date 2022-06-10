#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: the int being checked
 *
 * Return: returns the value of the last digit
 */

int print_last_digit(int i)
{
	int d = (i % 10);

	if (d < 0)
		d = d * -1;
	_putchar(d + '0');
	return (d);
}
