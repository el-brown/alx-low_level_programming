#include "main.h"
/**
  * *cap_string - capitalize all string
  *@s: argument
  *Return: char
  */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
		{
			i++;
		}
		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n')
	}
}
