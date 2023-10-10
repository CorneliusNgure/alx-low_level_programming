#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * init_dog - initializes struct dog variable.
 * @d: ptr to the dynamically allocated memory for the struct.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Description: longer description if applicable.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL && name != NULL && owner != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
