#include "main.h"

/**
 * get_bit - returns bit value of a given int at a given index.
 * @n: the unsigned long int to be checked.
 * @index: the position of the bit to be checked.
 * Return: the value of the bit at position index or -1 on error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
