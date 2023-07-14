#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * *string_nconcat - concatinates 2 strings
  *Return: char
  *@s1: argument
  *@s2: argument
  *@n: argument
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int l1, l2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
		;
	}
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{
		;
	}
	p = malloc(l1 + n + 1);
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j + 1] = '\0';
	return (p);
}
