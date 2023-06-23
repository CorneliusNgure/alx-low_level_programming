#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers 0 through 9 excluding 2 and 4.
 *
 * Return: void.
 */

void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i == '2')
		{
			i++;
			continue;
		}
		else if (i == '4')
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
}

