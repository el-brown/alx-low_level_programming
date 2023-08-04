#include "main.h"
#include <stdio.h>
/**
  * *_strstr - locates substring
  *Return: char
  *@haystack: argument
  *@needle: argument
  */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *p;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[i] == haystack[i])
		{
			p = &haystack[i];
			return (p);
		}
	}
	return (NULL);
}
