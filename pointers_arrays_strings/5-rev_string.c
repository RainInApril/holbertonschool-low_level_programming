#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string being reversed
 */

void rev_string(char *s)
{
	int in, j, tmp, len;

	in = 0;
	while (s[in] != '\0')
	{
		in = in + 1;
	}

	j = 0;
	len = in;
	in = in - 1;
	while (j < len / 2)
	{
		tmp = s[j];
		s[j] = s[in];
		s[in] = tmp;
		in = in - 1;
		j = j + 1;
	}
}
