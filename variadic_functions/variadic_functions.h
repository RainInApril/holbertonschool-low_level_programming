#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

/**
 * struct print - prints anything
 * @var: variable type
 * @f: the print function
 */

typedef struct print
{
	char *var;
	void (*f)(va_list);
} s_print;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _VARIADIC_FUNCTIONS_H_ */
