#include "main.h"

/**
 * string_length - gets the length of *s.
 * @s: the string.
 *
 * Return: length of the string.
 */

int string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + string_length(s + 1));
}

/**
 * _is_palindrome_recursion - checks if *s is the same from front and back.
 *
 * @s: string being checked.
 * @i: index iterating from the start of the string.
 * @j: index iterating from the end of the string.
 *
 * Return: 1 if palindrome,0 otherwise.
 */

int _is_palindrome_recursion(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}

	if (s[i] != s[j])
	{
		return (0);
	}

	return (_is_palindrome_recursion(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks if a string is palindrome or not.
 *
 * @s: string to be checked.
 *
 * Return: 1 if *s is palindrom, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int length = string_length(s);

	return (_is_palindrome_recursion(s, 0, length - 1));
}
