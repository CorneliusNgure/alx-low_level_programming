#include "main.h"

/**
 * _recursive_squareRoot - function called recursively to find the sqrt.
 * @n: number to be square rooted.
 * @u_input: possible sqrt of n.
 *
 * Return: square root of or -1 for error.
 */

int _recursive_squareRoot(int n, int u_input)
{
	if (u_input * u_input == n)
	{
		return (u_input);
	}

	if (u_input * u_input > n)
	{
		return (-1);
	}

	return (_recursive_squareRoot(n, u_input + 1));
}

/**
 * _sqrt_recursion - returns the natural sqrt of a no.
 * @n: the no.
 *
 * Return: -1 or n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_recursive_squareRoot(n, 1));
}
