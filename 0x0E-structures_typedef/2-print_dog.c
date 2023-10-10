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
	{
		return;
	}

	else
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("(nil)");
		}

		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("(nil)");

		}
	}

}
