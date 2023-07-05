#include "main.h"
/**
 * _strncpy - copies a string to another.
 *
 * @dest: the string to be copied to.
 * @src: the string to be copied from.
 * @n: the exact number of bytes to be copied.
 *
 * Return: pointer to the copied string (dest).
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}

	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}

	return (dest);
}
