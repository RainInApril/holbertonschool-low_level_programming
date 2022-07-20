#include "main.h"


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
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fileDes, writeFile;

	/* opens/creates file with read and write permission, truncate if exists */
	fileDes =  open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	/* returns -1 if filename is NULL or failed to open/create */
	if (filename == NULL || fileDes == -1)
		return (-1);
	/* creates an empty file if text_content is NULL */
	if (text_content == NULL)
		text_content = "";
	/* writes file */
	writeFile = write(fileDes, text_content, _strlen(text_content));
	/* returns -1 write if failed */
	if (writeFile == -1)
		return (-1);

	close(fileDes);
	/* returns 1if success */
	return (1);
}
