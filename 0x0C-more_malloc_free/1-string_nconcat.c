#include "main.h"
#include <stdlib.h>
/**
  * *string_nconcat - concatinates a string
  *Return: char
  *@s1: argument
  *@s2: argument
  *@n: argument
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	ptr = malloc(len1 + n + 1);
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	if (n >= len2)
	{
		for (j = 0; j < len2; j++)
		{
			ptr[i + j] = s2[j];
		}
	}
	else if (n < len2)
	{
		for (j = 0; j < n; j++)
		{
			ptr[i + j] = s2[j];
		}
	}
	return (ptr);
	free(ptr);
}
