#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the char to be capitalised
 * Return: returns the string with capitalised char
 */

char *cap_string(char *s)
{
	int i, j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 32 || s[i] == '"' ||
				s[i] == '\n' || s[i] == '\t' ||
				s[i] == ',' || s[i] == ';' ||
				s[i] == '(' || s[i] == ')' ||
				s[i] == '!' || s[i] == '?' ||
				s[i] == '{' || s[i] == '}' ||
				s[i] == ' ' || s[i] == '.')
		{
			j = 1;
		}
		else if ((s[i] >= 'a' && s[i] <= 'z' && j == 1) ||
			(s[0] >= 'a' && s[0] <= 'z'))
		{
			s[i] = s[i] - 32;
			j = 0;
		}
		else
		{
		       j = 0;
		}
	}
	return (s);

}
