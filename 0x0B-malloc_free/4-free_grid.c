#include "main.h"
#include <stdlib.h>
/**
  *free_grid - free grid
  *Return: void
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
