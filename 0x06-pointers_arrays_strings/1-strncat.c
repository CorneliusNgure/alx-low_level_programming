#include "main.h"
/**
 * _strncat - Function that concatenate two strings.
 *
 * @dest: string to be concatenated.
 * @src: string to be concatenated.
 * @n: the exact number of characters to be concatenated from the src string.
 *
 * * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;

	while (y < n && src[x] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
