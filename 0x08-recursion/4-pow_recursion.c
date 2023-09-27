#include "main.h"

/**
 * _pow_recursion - returns the value of x raise to y.
 *
 * @x: base.
 * @y: exponent.
 *
 * Return: -1 if y < 0/ 1 if y == 0/ result of x to power y if y > 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(y - 1));
	}
}
