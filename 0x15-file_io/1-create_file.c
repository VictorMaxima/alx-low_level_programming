#include "main.h"

/**
 * create_file - creates a new fike
 * @filename: name of fuke to be created
 * @text_content: content of the file
 * Return: 1 if successfuk
 */

int create_file(const char *filename, char *text_content)
{
	int fileDes, numletters, numwrite;

	if (!filename)
		return (-1);
	fileDes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileDes == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (numletters = 0; text_content[numletters]; numletters++)
	;
	numwrite = write(fileDes, text_content, numletters);
	if (numwrite == -1)
		return (-1);
	close(fileDes);
	return (1);
}
