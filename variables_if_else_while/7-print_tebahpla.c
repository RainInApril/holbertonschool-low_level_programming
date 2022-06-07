#include <stdio.h>

/**
 * main -  prints the lowercase alphabet in reverse
 *
 * Return: always returns 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		printf("%c", c);
	printf("\n");
	return (0);
}
