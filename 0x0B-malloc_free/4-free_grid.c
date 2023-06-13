#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid -  frees 2D grid created by your alloc_grid function
 * @grid: grid to be freed
 * @height: grid height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid != NULL && height > 0)
	{
		for (j = 0; j < height; j++)
		{
			free(grid[j]);
		}
		free(grid);
	}
}
