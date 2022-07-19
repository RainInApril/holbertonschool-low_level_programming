#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: value to be flipped
 * @m: value to be used as referrence
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;

	while (n != 0 || m != 0)
	{
		/* compares far right digit of n and m*/
		if ((n & 1) != (m & 1))
			/* count adds 1 everytime it sees a difference */
			/* between n and m 's far right digit*/
			count = count + 1;
		/* right shift n and m to go through the loop again */
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
