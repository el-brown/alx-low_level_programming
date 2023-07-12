#include  "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
   ** *create_array - creates an array of chars
   *Return: char
   *@size: argument
   *@c: argument
   */
char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size * sizeof (char));

	if (size == 0 || ar == 0)
	{
		return (NULL);
	}
	while (size)
	{
		ar[size] = c;
		size--;
	}
	return (ar);
}
