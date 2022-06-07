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

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '8'; b++)
		{
			for (c = b + 1; c <= '7'; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);

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
