#include "main.h"
#include <stddef.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: position of the bit.
 * @n: the int to be checked.
 *
 * Return: 1 on success, -1 on error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1 << index;
	*n = *n | mask;

	return (1);
}
