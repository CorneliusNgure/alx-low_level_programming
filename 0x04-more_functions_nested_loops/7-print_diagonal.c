#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line (\) on the terminal.
 * @n: no. of times the \ should be printed.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					putchar('\\');
				else if (j < i)
					putchar(' ');
			}
		putchar('\n');
		}
	}
}
