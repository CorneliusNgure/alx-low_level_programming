#include "main.h"
#include <stddef.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the int to be checked.
 * @index: the position of the bit to be set.
 *
 * Return: 1 on success and -1 on error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1UL << index);
	*n = *n & mask;

	return (1);
}
