#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: always returns 0
 */

int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}

