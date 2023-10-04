#include "main.h"

/**
 * read_textfile - append text
 * Return: int
 * @filename: argument
 * @letters: argument
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t i;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	i = read(fd, &buf[0], letters);
	i = write(STDOUT_FILENO, &buf[0], i);
	close(fd);
	return (i);
}
