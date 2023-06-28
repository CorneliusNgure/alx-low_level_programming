#include "main.h"

/**
 * rev_string - function to reverse a string.
 *
 *@s: the pointer string.
 *
 * Return: string in reverse.
 */

void rev_string(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	while (length--)
		_putchar(s[length]);
	_putchar('\n');
}
