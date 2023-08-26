#include "main.h"

/**
 * flip_bits - function returning the number of bits you would need to flip
 * @n : the 1st no.
 * @m : the 2nd no.
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int i = 0;

	x = n ^ m;
	while (x >= 1)
	{
		if ((x & 1) == 1)
		i++;
		x >>= 1;
	}
	return (i);
}
