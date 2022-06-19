#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: the matrix
 * @size: the size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, ma1, ma2;

	i = 0;
	j = 0;
	ma1 = 0;
	ma2 = 0;

	while (i < size)
	{
		ma1 = ma1 + *(a + i + j);
		ma2 = ma2 + *(a - i + j + size - 1);
		j = j + size;
	}
	printf("%d, %d\n", ma1, ma2);
	i = i + 1;
}
