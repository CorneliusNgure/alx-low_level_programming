#include "main.h"

/**
 * flip_bits - returns # of bits you'd flip to get from one # to another.
 * @n: 1st no.
 * @m: 2nd no.
 *
 * Return: count.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
