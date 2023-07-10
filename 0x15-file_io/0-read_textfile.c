#include "main.h"

/**
 * read_textfile - reads a text file and prints letters
 * @filename: filename to be read
 * @letters: numbers of letters
 * Return: no of letters printed if fails then return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t mywrite, myread;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);
	myread = read(fd, buffer, letters);
	mywrite = write(STDOUT_FILENO, buffer, myread);

	close(fd);
	free(buffer);
	return (mywrite);
}
