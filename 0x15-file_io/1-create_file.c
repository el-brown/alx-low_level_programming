#include "main.h"

/**
  *_strlen - calculates the length of a string
  *@s: argument
  *@Return: int
  */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
	{
		i++;
	}
	return (i);
}
/**
  *create_file - create a file
  *Return: int
  *@filename: argument
  *@text_context: argument
  */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t i = 0, len = _strlen(text_content);

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (len)
	{
		i = write(fd, text_content, len);
	}
	close(fd);
	return (i == len ? 1 : len);
}
