#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * **alloc_grid - returns a pointer to a 2d array of integers
 * @width: array width
 * @height: array height
 * Return: f width or height is 0 or negative, return NULL
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
