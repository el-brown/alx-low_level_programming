#include "main.h"
/**
  *_strlen - size of a string
  *Return: int
  *@s: argument
  */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}
