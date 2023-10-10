#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - function to print struct dog.
 * @d: pointer to the struct.
 * Return: void.
 *
 * Description: No long desscription required.
 */

 void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

