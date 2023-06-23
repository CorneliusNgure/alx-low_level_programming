#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers 0 through 9 followed bya new line.
 *
 * Return: void.
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
