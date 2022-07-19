#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: value given
 * @index: index given
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	/* left shift 1 to n number of index */
	index = 1 << index;
	/* compares *n with inverted index using & operator */
	*n = *n & ~index;
	/*
	 * (*n = 1024) =   10000000000
	 * (index = 10) =  10000000000
	 * (~index) =      01111111111
	 * (*n & ~index) = 00000000000
	 */
	return (1);
}
