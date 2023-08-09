#include "main.h"
#include <stdlib.h>
/**
  * *str_concat - concatinates 2 strings
  *Return: pointer
  *@s1: argument
  *@s2: argument
  */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, size1, size2;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	else if (s2 == NULL)
	{
		s2 = "\0";
	}
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	ptr = malloc(size1 + size2 + 2);
	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size1; i++)
		{
			ptr[i] = s1[i];
		}
		for (j = 0; j < size2; j++)
		{
			ptr[j + i] = s2[j];
		}
		ptr[i + j] = '\0';
	}
	return (ptr);
}
