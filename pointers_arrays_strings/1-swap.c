#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: the int being swapped
 *@b: the other int being swapped
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
