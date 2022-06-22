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
	int i, sum = 0;

	if (argc < 1)
	{
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
