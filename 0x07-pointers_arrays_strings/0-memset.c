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
	int i = 0;

	for (; n > 0; i++)
	{
		*s = b;
		n--;
	}
	return (s);
}
