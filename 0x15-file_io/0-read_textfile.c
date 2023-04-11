#include "main.h"

/**
 * read_textfile - reads a textfike
 * @filename: name of file to be read
 * @letters: number of letters to be read
 * Return: number of letters actually read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDes;
	ssize_t numread, numwrite;
	char *buffer;

	if (!filename)
		return (0);
	fileDes = open(filename, O_RDONLY);
	if (fileDes == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	numread = read(fileDes, buffer, letters);
	numwrite = write(STDOUT_FILENO, buffer, numread);
	close(fileDes);
	free(buffer);
	return (numwrite);
}
