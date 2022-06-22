#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of the arguments
 * @argv: array of the arguments
 * Return: returns 0 if no issues, else 1
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (isdigit(argv[a][b]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (a = 1; a < argc; a++)
	{
		sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
