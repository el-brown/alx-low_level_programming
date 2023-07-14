#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * *array_range - creates an array of int
  *Return: int
  *@min: argument
  *@max: argument
  */
int *array_range(int min, int max)
{
	int *p;
	int i, l;

	if (min > max)
	{
		return (NULL);
	}
	l = max - min + 1;
	p = malloc(l * sizeof(int));
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		p[i]  = min;
		min++;
	}
	return (p);
}
