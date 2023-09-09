#include "main.h"

/**
  * read_textfile - create a file
  *Return: ssize_t
  *@filename: argument
  *@letters: argument
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t i;
	char buffer[READ_BUFFER_SIZE * 8];

	if (!filename || !letters)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	i = read(fd, &buffer[0], letters);
	i = write(STDOUT_FILENO, &buffer[0], i);
	close(fd);
	return (i);
}
