#include "main.h"

/**
 * sqrt_check - check for square number
 * @n: number to be check for square root
 * @i: number to be iterating from 1 to n
 * Return: the result of square root
 */

int sqrt_check(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (sqrt_check(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to be check for quare root
 * Return: returns the result of n squared
 */

int _sqrt_recursion(int n)
{
	return (sqrt_check(n, 1));
}
