#include "main.h"
#include <stdlib.h>
/**
  * *malloc_checked - allocates memory
  *Return: void
  *@b: argument
  */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
