#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - construct 2d array
 * @width: array width
 * @height: array height
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		matrix[j] = malloc(width * sizeof(int));
		if (matrix[j] == NULL)
		{
			while (j >= 0)
				free(matrix[j--]);
			free(matrix);
			return (NULL);
		}
		for (k = 0; k < width; k++)
			matrix[k] = 0;
	}
	return (matrix);
}
