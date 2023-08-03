#include "main.h"
/**
 * _strlen_recursion - calculate length of a string
 * Return: int
 * @s: argument
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
