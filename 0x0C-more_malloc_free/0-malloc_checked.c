#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * *malloc_checked - allocation check
  *@b: argument
  *Return: void pointer
  */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
	{
		exit(98);
	}
	return (p);
}
