#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * **alloc_grid - returns a pointer to a 2 dimentional array
  *Return: int
  *@width: argument
  *@height: argument
  */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	ar = malloc(height * sizeof(int));
	if (width <= 0 || height <= 0 || ar == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == 0)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
