#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: value of an unsigned long bit.
 * @index:index.
 * Return: value at index or -1 on error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);

n >>= index;
	if ((n & 1) == 1)
	return (1);
	else
	return (0);
}
