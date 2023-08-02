#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints the struct dog.
 * @d: pointer to struct dog.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	else if (d->name == NULL)
		printf("nil");
	else if (d->owner == NULL)
		printf("nil");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
