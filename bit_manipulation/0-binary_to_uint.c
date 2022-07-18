#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return:  the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int index = 0;

	/* returns 0 if b is NULL */
	if (b == NULL)
		return 0;

	while (b[index] != '\0')
	{
		/* returns 0 if one or more chars in string b is not 0 or 1 */
		if (b[index] != 0 || b[index] != 1)
			return (0);
		/* shift 1 place to the left */
		num = num << 1;
		num = num + b[index]-'0';
		index = index + 1;
	}
	return num;
}
