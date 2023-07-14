#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * *_calloc - allocates memory
  *Return: void pointer
  *@nmemb: argument
  *@size: argument
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	int *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		pointer[i] = 0;
	}
	p = pointer;
	return (p);
}
