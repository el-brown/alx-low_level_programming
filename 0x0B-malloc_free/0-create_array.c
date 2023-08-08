#include "main.h"
#include <stdlib.h>
/**
  * *create_array - creates an array
  *Return: pointer to char
  *@size: argument
  *@c: argument
  */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *n = malloc(size);

	if (size == 0 || n == 0)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			n[j] = c;
		}
		return (n);
	}
}
