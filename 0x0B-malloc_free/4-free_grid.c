#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *free_grid - free grid
  *@grid: argument
  *@height: argument
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
