#include "function_pointers.h"

/**
 * array_iterator - executes function as a parameter on each array element.
 * @array: the array.
 * @size: size of the array.
 * @action: function ptr to the array.
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
