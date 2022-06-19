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
	int i, j, k;
	int ma1 = 0;
	int ma2 = 0;

	for (i = 0; i < size; i++)
	{
		k = (size + 1) * i;
		ma1 = ma1 + *(a + k);
	}

	for (j = size; j > 0; j--)
	{
		k = (size - 1) * j;
		ma2 = ma2 + *(a + k);
	}
	printf("%d, %d\n", ma1, ma2);
}
