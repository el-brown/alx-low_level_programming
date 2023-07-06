#include "main.h"
/**
  *is_palindrome - check if the string is palindrome
  *Return: int
  *@s: argument
  *@p: argument
  *@l: argument
  */
int set(char *s, int l);
int pal(char *s, char *p);

int is_palindrome(char *s)
{
	char *p;
	int l = 0;

	set(s, l);
	p = &s[l];
	return (pal(s, p));
}

int set(char *s, int l)
{
	if (*s != '\0')
	{
		return (set(s + 1, l + 1));
	}
	return (l);
}

int pal(char *s, char *p)
{
	if (*s == *p && *s != '\0')
	{
		return (pal(s + 1, p - 1));
	}
	else if (*s != *p)
	{
		return (0);
	}
	return (1);
}
