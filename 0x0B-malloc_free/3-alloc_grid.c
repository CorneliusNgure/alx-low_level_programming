#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function returning a ptr to an array.
 * @width: rows of the array.
 * @height: column of the array.
 *
 * Return: NULL on failure and if array argments are 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	int **malloc_grid = malloc(height * sizeof(int *));

	if (malloc_grid == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < height; i++)
	{
		malloc_grid[i] = malloc(width * sizeof(int));

		if (malloc_grid[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(malloc_grid[j]);
			}

		free(malloc_grid);
		return (NULL);

		}

		for (int j = 0; j < width; j++)
		{
			malloc_grid[i][j] = 0;
		}
	}

	return (malloc_grid);
}
