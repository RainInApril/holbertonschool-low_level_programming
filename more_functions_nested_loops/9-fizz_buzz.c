#include <stdio.h>

/**
 * main -  a program that prints the numbers from 1 to 100
 *	prints Fizz for multiples of 3
 *	prints Buzz for multiples of 5
 *	prints FizzBuzz for multiples of 3 and 5
 *Return: always returns 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			putchar(' ');
		}
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
