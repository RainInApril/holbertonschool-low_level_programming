#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);

	i = 0;
	while (i < n)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			str = ("(nil)");

		if (separator == NULL || i == 0)
			printf("%s", str);

		else
			printf("%s%s", separator, str);

		i = i + 1;
	}
	printf("\n");
	va_end(list);
}
