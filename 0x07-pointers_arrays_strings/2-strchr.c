#include "main.h"
/**
  * *_strchr - locates char
  *Return: char
  *@s: argument
  *@c: argument
  */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			p = &s[i];
			return (p);
		}
	}
	return (NULL);
}
