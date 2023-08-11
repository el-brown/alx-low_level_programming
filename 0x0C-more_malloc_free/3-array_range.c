#include "main.h"
#include <stdlib.h>
/**
  * *array_range - creates an array of integers
  *Return: int
  *@min: argument
  *@max: argument
  */
int *array_range(int min, int max)
{
	int *ptr, i, j;

	if (min > max)
	{
		return (NULL);
	}
	j = max - min + 1;
	ptr = malloc(sizeof(int) * j);
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
