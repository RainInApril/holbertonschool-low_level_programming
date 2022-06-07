#include <stdio.h>

/**
 * main -  prints all possible different combinations of three digits
 *
 * Return: always returns 0
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (c = '0'; c <= '7'; c++)
	{
		for (b = c + 1; b <= '8'; b++)
		{
			for (a = b + 1; a <= '9'; a++)
			{
				putchar(c);
				putchar(b);
				putchar(a);

				if (a < '9' || b < '8' || c < '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
