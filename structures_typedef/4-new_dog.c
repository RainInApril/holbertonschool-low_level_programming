#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: the string being checked
 * Return: returns the length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the pointer to the string
 * Return: returns a pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = _strlen(str);

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	j = 0;

	while (j < i)
	{
		ptr[j] = str[j];
		j = j + 1;
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog - creates a new dog
 * @name: the name of new dog
 * @age: the age of new dog
 * @owner: the owner of new dog
 * Return: a pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(*new_dog) + 1);
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	new_dog->age = age;
	new_dog->owner = _strdup(owner);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
