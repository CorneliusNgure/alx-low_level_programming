#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: mininum array value.
 * @max: maximum array value.
 * Return: pointer to the array.
 */

int *array_range(int min, int max)
{
	int i;
	int *arr_malloc;

	if (min > max)
	{
		return (NULL);
	}

	arr_malloc = malloc(sizeof(int) * (max - min + 1));

	if (arr_malloc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		array[i] = min + i;
	}

	return (arr_malloc);
}
