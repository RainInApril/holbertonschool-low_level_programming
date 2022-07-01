#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - returns sum
 * @a: int to be added
 * @b: another int to be added
 * Return: sum of int a and int b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference
 * @a: an int in the equation
 * @b: another int in the equation
 * Return: the difference between int a and int b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product
 * @a: an int in the multiplication
 * @b: another in in the multiplication
 * Return: the product of int a times int b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division
 * @a: an int in the division
 * @b: another int in the division
 * Return: returns the outcome of a division between int a and int b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder
 * @a: one of the int in the equation
 * @b: another int in the equation
 * Return: returns the remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
