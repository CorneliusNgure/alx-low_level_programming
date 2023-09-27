#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- prints sum of the diagnols.
 * @a: pointer to the matrix.
 * @size: size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d\n", sum1);
	printf("%d\n", sum2);
}
