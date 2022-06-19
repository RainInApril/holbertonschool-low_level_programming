#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: matrix
 * @size: the size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, ma1, ma2;

	ma1 = 0;
	ma2 = 0;
	i = 0;

	while (i < size)
	{
		ma1 = ma1 + *(a + i * (size + 1));
		ma2 = ma2 + *(a + (i + 1) * (size - 1));
	}
	printf("%d, %d\n", ma1, ma2);
	i = i + 1;
}
