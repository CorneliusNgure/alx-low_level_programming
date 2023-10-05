#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates mem using malloc.
 * @b: memory size to be dynamically allocated.
 *
 * Return: ptr to the newly allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
