#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all the parameters.
 *
 * @n: # of parameters.
 * @...: the rest of the parameters to be passed to main.
 *
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum = 0;

	va_start(arg, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(arg, int);

	va_end(arg);
	return (sum);
}
