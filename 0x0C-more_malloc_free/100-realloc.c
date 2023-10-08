#include <stdlib.h>

/**
 * _realloc - reallocates a mem block using malloc and free.
 * @ptr: ptr to the mem previously allocated with malloc.
 * @old_size: size of the space allocated for ptr.
 * @new_size: size of new mem block.
 * Return: reallocated mem block ptr.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;
	char *source;
	char *destination;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	source = ptr;
	destination = new_ptr;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		destination[i] = source[i];
	}

	free(ptr);

	return (new_ptr);
}
