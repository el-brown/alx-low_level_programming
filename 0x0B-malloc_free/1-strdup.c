#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * *_strdup - copies a string to another allocated memory
  *Return: char
  *@str: argument
  */
char *_strdup(char *str)
{
	int i, size;
	char *ar;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}
	ar = malloc(size * sizeof(char) + 1);
	if (ar == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = str[i];
	}
	return (ar);
}
