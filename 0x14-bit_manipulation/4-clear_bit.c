#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 *
 * @n: the number you want to set value to 0
 * @index: the index of the bit to be set.
 *
 * Return: 1 (Success) or -1 on error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n = (*n & ~(1 << index));

		return (1);
	}
	return (-1);
}
