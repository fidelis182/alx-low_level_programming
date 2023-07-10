#include "main.h"

/**
 * append_text_to_file - creates a file
 * @filename: filename.
 * @text_content: content writtten in a file.
 * Return: 1 if successful else -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letter;
	int rwr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (letter = 0; text_content[letter]; letter++)
			;
		rwr = write(fd, text_content, letter);
		if (rwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
