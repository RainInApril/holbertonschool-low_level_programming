#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * main - performs simple operations
  * @argc: number of arguments
  * @argv: array of pointers to arguments
  *
  * Return: prints Error\n, exit 98 for wrond number of arguments
  * prints Error\n, exit 99 if operator does not match
  * prints Error\n, exit 100 if user tries to / or % by 0
  */

int main(int argc, char *argv[])
{
	int a, b;
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	o = get_op_func(argv[2]);
	if (o == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", o(a, b));

	return (0);
}
