#include "main.h"
#include <stdlib.h>
/**
  * *_strdup - copy a string
  *Return: pointer to allocated memory
  *@str: argument
  */
int length(char *str);

char *_strdup(char *str)
{
	int j;
	char *ptr = malloc(length(str));

	if (str == NULL || ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			ptr[j] = str[j];
		}
		return (ptr);
	}
}

/**
  * length - calculates the length of a string
  *Return: int
  *@str: argument
  */

int length(char *str)
{
	int i;

	for (i = 1; *str != '\0'; i++)
	{
		str++;
	}
	return (i);
}
