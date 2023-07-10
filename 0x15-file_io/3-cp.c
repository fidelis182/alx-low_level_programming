#include"main.h"

char *make_buff(char *fd);
void cls_file(int fd);

/**
 * make_buff - create a buffer of size 1024
 * @fd: file to make buffer of
 * Return: value of buffer
 */

char *make_buff(char *fd)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error, can't write to %s\n", fd);
		exit(99);
	}
	return (buffer);
}

/**
 * cls_file - close a file
 * @fd: file description
 */

void cls_file(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error, can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy details of a file to another file, if it doesnt exit create
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int frm, to, rd, wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage:cp file_from file_to\n");
		exit(98);
	}

	buf = make_buff(argv[2]);
	frm = open(argv[1], O_RDONLY);
	rd = read(frm, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error, can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		wr = write(to, buf, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error, cant't write to %s\n", argv[1]);
			free(buf);
			exit(99);
		}

		rd = read(frm, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buf);
	cls_file(frm);
	cls_file(to);

	return (0);
}
