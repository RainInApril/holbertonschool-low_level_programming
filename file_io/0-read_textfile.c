#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: letters to be read and printed
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* creates variable to hold the file descriptor */
	ssize_t fileDes, readFile, writeFile;
	char *memSpace;

	/* opens the file and read only*/
	fileDes = open(filename, O_RDONLY);
	/* returns 0 if open failed or filename is NULL */
	if (fileDes == -1 || filename == NULL)
		return (0);

	/* allocates memory space for letters */
	memSpace = malloc(sizeof(*memSpace) * letters);
	/* returns 0 if buf is empty */
	if (memSpace == NULL)
	{
		return (0);
	}
	/* reads file */
	readFile = read(fileDes, memSpace, letters);
	/* returns 0 if read failed */
	if (readFile == -1)
	{
		/* frees unused memory space */
		free(memSpace);
		return (0);
	}
	/* writes file */
	writeFile = write(STDOUT_FILENO, memSpace, readFile);
	/* returns 0 if write failed */
	if (writeFile == -1)
		return (0);
	/*frees memSpace and closes fileDes */
	free(memSpace);
	close(fileDes);
	/* returns the number of letters it should read and print */
	return (readFile);
}
