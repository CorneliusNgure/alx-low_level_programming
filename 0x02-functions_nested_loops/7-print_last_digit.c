#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @i: the number to be checked.
 * Return: the last digit.
 */

int print_last_digit(int i)
{
	int n;

	if (i < 0)
		i = -i;

	n = i % 10;

	if (n < 0)
		n = -n;

	_putchar (n + '0');

	return (n);
}
