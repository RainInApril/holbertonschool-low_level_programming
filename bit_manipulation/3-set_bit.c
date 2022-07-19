#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the value given
 * @index: the index given
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* returns -1 if an error occured */
	if (index > 63)
		return (-1);

	/* left shift 1 to n number of index */
	index = 1 << index;
	/* compares *n with index to manipulate their values */
	*n = *n | index;
	/*
	 * (n = 98)     1100010
	 * (index = 2)  0000100
	 * (*n | index) 1100110 =  102
	 */
	return (1);
}
