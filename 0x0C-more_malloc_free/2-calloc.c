#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocated memory of an array using malloc.
 * @nmemb: no. of elements in the array.
 * @size: size of each byte.
 *
 * Return: ptr to the array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr_malloc;
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr_malloc = malloc(nmemb * size);

	if (ptr_malloc == NULL)
	{
		return (NULL);
	}

	array = ptr_malloc;

	for (i = 0; i < nmemb * size; i++)
	{
		array[i] = 0;
	}

	return (ptr_malloc);
}
