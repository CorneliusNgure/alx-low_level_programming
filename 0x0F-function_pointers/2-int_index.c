#include "function_pointers.h"

/**
 * int_index - searches for an int.
 * @array: the array.
 * @size: array size.
 * @cmp: function ptr to the array.
 *
 * Return: index of the 1st element that match, -1 otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
