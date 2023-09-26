#include "main.h"

/**
 * _strspn - get the length of a prefix substring.
 * @s: the input string.
 * @accept: the chars to be gotten.
 *
 * Return: the length of accept in the *s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count_length = 0;

	while (*s != '\0')
	{
		char *c = accept;

		while (*c != '\0')
		{
			if (*s == *c)
			{
				count_length++;
				break;
			}
			c++;
		}

		if (*c == '\0')
		{
			break;
		}
		s++;
	}
	return (count_length);
}
