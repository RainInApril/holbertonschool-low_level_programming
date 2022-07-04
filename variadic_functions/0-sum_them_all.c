#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: const unsigned int
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list list;

	va_start(list, n);

	i = 0;
	sum = 0;
	while (i < n)
	{
		sum = sum + va_arg(list, int);
		i = i + 1;
	}
	if (n == 0)
		return (0);
	va_end(list);
	return (sum);
}
