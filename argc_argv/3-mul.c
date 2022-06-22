#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of the arguments
 * @argv: array of the arguments
 * Return: always returns 0
 */

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
		puts("Error");

		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);

	return (0);
}
