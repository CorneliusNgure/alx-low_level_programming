#include "main.h"

/**
 * _strlen_recursion - returns the string length.
 * @s: the string.
 * Return: string length.
 */

int _strlen_recursion(char *s)
{
	while (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
