#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an arrray of chars.
 *
 * @size: the size of the array.
 *
 * @c: the char.
 *
 * Return: pointer to the the array.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		exit(0);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
