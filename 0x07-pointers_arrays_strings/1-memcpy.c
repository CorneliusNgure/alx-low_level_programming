#include "main.h"

/**
 * _memcpy - copies the mem area.
 *
 * @dest: mem block to copy to.
 * @src: mem block to copy from.
 * @n: mem size.
 *
 * Return: pointer to the destination mem block.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		dest++;
	}

	return (dest);
}
