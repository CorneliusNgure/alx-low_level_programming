#include "main.h"

/**
 * print_binary - prints the binary representation of anumber.
 * @n: the unsigned long int to be printed in binary.
 *
 * Return: the printed bianry.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar((n & 1) ? '1' : '0');
}
