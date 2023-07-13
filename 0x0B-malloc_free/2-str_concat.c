#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * *str_concat - concatinates two strings
  *Return: char
  *@s1: argument
  *@s2: argument
  */
char *str_concat(char *s1, char *s2)
{
	int size, size1, size2, i, j;
	char *ar;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	else if (s2 == NULL)
	{
		s2 = "\0";
	}
	else
	{
		for (size1 = 0; s1[size1] != '\0'; size1++)
		{
			;
		}
		for (size2 = 0; s2[size2] != '\0'; size2++)
		{
			;
		}
		size = size1 + size2;
		ar = malloc(size * sizeof(char) + 1);
		if (ar == 0)
		{
			return (NULL);
		}
		for (i = 0; i < size1; i++)
		{
			ar[i] = s1[i];
		}
		for (j = 0; j < size; j++)
		{
			ar[j + i] = s2[j];
		}
	}
	return (ar);
}
