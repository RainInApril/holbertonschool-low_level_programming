#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: always returns 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
