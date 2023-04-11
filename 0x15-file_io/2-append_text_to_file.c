#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of file
 * @text_content: text to be appended
 * Return: 1 if successful
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDes, numletters, numwrite;

	if (!filename)
		return (-1);
	fileDes = open(filename, O_WRONLY | O_APPEND);
	if (fileDes == -1)
		return (-1);
	if (text_content)
	{
		for (numletters = 0; text_content[numletters]; numletters++)
		;
		numwrite = write(fileDes, text_content, numletters);
		if (numwrite == -1)
			return (-1);
	}
	close(fileDes);
	return (1);
}
