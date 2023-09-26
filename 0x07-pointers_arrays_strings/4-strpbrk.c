#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to be searched.
 * @accept: ptr to a string containing a set of chars to be searched.
 *
 * Return: the char being searched, otherwise NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *c = accept;

		while (*c != '\0')
		{
			if (*s == *c)
			{
				return (s);
			}
			c++;
		}
	s++;
	}

	return ('\0');
}
