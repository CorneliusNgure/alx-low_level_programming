#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free struct memory.
 * @d: ptr to struct.
 * Return: void.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
