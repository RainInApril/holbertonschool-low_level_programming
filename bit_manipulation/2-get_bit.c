#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number given
 * @index: the index given
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	/* unsigned long int is a 64 bit value */
	/* index range 0 - 63 */
	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
