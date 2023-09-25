#include "main.h"

/**
 * _memset - mimics the memset function.
 * @s: pointer to the start of the mem block.
 * @b: the value to be used to fill the mem block.
 * @n: the size of the mem. to be filled.
 *
 * Return: pointer to the end of the filled mememory.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}
