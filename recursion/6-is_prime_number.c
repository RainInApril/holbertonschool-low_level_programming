#include "main.h"

/**
 * primt_check - checks for prime number
 * @n: the number to be checked
 * @i: the iterator
 * Return: returns 1 if prime, 0 if otherwise
 */

int prime_check(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime_check(n, i - 1));
}

/**
 * is_prime_number - 1 if the input integer is a prime number,
wsdxcvb nmf, <F12> * otherwise return 0
 * @n: the number being checked
 * Return: returns 1 if prime, 0 if otherwise
 */

int is_prime_number(int n)
{
        if (n <= 1)
        {
                return (0);
        }
        return (prime_check(n, n - 1));
}
