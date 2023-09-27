#include "main.h"

/**
 *is_prime_number - check if a # is prime.
 *@n: the # to be checked.
 *
 * Return: 1, if n = prime, 0 otherwise.
 */

int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}

	if (n <= 3)
	{
		return (1);
	}

	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	if (n % 5 == 0)
	{
		return (0);
	}
	return (1);
}
