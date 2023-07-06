#include "main.h"
/**
  *_strlen_recursion - lenth of a string
  *Return: int
  *@s: argument
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
