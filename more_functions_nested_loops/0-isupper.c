#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: the int being checked
 *
 * Return: 1 if c is upper case, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
