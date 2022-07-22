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
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and
 * -1 if the file does not exist
 *  or if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDes, writeFile;

	/* opens/creates file that appends text at the end of file */
	fileDes =  open(filename, O_RDWR | O_APPEND);
	/* returns -1 if filename is NULL or failed to open/create */
	if (filename == NULL || fileDes == -1)
		return (-1);
	/* adds nothing if text_content is NULL */
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
