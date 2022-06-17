#include "main.h"

/**
 * leet - encodes a string into leet
 * @s: the string being encoded
 * Return: returns the encoded string
 */

char *leet(char *s)
{
	int i = 0;
	char *str = "aAeEoOtTlL";
	char *leet = "4433007711";
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == str[j])
				s[i] = leet[j];
			j = j + 1;
		}
		i = i + 1;
	}
	return (s);

}
