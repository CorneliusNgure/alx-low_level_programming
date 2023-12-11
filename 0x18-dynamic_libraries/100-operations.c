#include <stdio.h>

/**
 * add - adds two ints
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: a + b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two numbers
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: a - b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two ints
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: a * b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two ints
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: a / b
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - returns the modulus of two ints
 * @a: 1st int.
 * @b: 2nd int.
 *
 * Return: result
 */
int mod(int a, int b)
{
	int result;

	result = a % b;
	return (result);
}
