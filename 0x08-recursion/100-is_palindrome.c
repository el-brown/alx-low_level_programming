#include "main.h"
/**
 * is_palindrome - verify if string is a palindrome
 * Return: int
 * @s: argument
 */
int _strlen_recursion(char *s);
int pal(char *s, char *p);
int is_palindrome(char *s)
{
	int l;
	char *p;

	l = _strlen_recursion(s);
	p = s + l - 1;
	return (pal(s, p));
}
/**
 * _strlen_recursion - count length of a string
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
/**
 * pal - verify if it is palindrome
 * Return: int
 * @s: arg
 * @p: arg
 */
int pal(char *s, char *p)
{
	if (*s != *p)
	{
		return (0);
	}
	else if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (pal(s + 1, p - 1));
	}
}
