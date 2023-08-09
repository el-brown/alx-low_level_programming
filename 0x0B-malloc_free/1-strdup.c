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
	int j, size;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
		;
	ptr = malloc(size + 1);
	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			ptr[j] = str[j];
		}
	}
	return (ptr);
}
