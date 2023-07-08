#include "main.h"
/**
  * *_memset - files memory with a constant byte
  *Return: char
  *@s: argument
  *@b: argument
  *@n: argument
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
