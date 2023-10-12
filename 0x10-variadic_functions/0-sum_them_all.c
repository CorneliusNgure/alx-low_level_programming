#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all the parameters.
 * @n: no. of additional arguments to be passed.
 *
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
