#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: counts the arguments supplied to the program
 * @argv: an array of pointers to the strings
 * Return: always returns 0
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
