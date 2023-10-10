#include <stdlib.h>
#include "dog.h"

/**
 * string_length - returns the length of the string.
 * @src: the string.
 *
 * Return: string length.
 */

int string_length(char *src)
{
	int length = 0;
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		length++;
	}

	return (length);
}

/**
 * duplicate_string - duplicates a string.
 * @src: the string.
 *
 * Return: duplicated string.
 */

char *duplicate_string(char *src)
{
	int len, i;
	char *dest;

	if (src == NULL)
	{
		return (NULL);
	}

	len = string_length(src);

	dest = malloc(len + 1);

	if (dest == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

/**
 * new_dog - new dog structure.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: new struct created.
 *
 * Description: longer description.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_newDog = malloc(sizeof(dog_t));

	if (ptr_newDog == NULL)
	{
		return (NULL);
	}

	ptr_newDog->name = duplicate_string(name);

	if (ptr_newDog->name == NULL)
	{
		free(ptr_newDog);

		return (NULL);
	}

	ptr_newDog->age = age;

	ptr_newDog->owner = duplicate_string(owner);

	if (ptr_newDog->owner == NULL)
	{
		free(ptr_newDog->name);
		free(ptr_newDog);
		return (NULL);
	}

	return (ptr_newDog);
}
