#include "main.h"

/**
 * _pow_recursion - returns the value of x
 * raised to the power of y
 * @x: the value to be raised
 * @y: the power value
 * Return: the value of x after powering up
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
		/*x to the power of 0 is equals to 1*/
	}

	if (y == 1)
	{
		return (x);
		/*x to the power of 1 is equals to x*/
	}

	else
	{
		return (_pow_recursion(x, y - 1) * x);
		/*y - 1 for iterating y until it gets to 1 or 0*/
		/* * x because you need to  multiply x that many times*/
	}
}
