#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_c - prints a char
 * @c: the char to be printed
 *
 * Return: void
 */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_i - prints an integer
 * @i: the int to be printed
 *
 * Return: void
 */

void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - prints a float
 * @f: the float to be printed
 *
 * Return: void
 */

void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_s - prints a string
 * @s: the string to be printed
 *
 * Return: void
 */

void print_s(va_list s)
{
	char *str;

	str = va_arg(s, char *);

	if (str == NULL)
		str = ("(nil)");

	printf("%s", str);
}

/**
 * print_all - prints anything, followed by a new line
 * @format: letter to present argument types
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *separator = "";
	va_list list;

	s_print func[] = {
		{"s", print_s},
		{"f", print_f},
		{"i", print_i},
		{"c", print_c},
		{NULL, NULL}
	};

	if (format == NULL)
		return;

	va_start(list, format);
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (func[j].var != NULL)
		{
			if (*(func[j].var) == format[i])
			{
				printf("%s", separator);
				func[j].f(list);
				separator = ", ";
				break;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	va_end(list);
	printf("\n");
}
