#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees the alloc_grid function.
 * @grid: array.
 * @height: rows/ columns.
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
