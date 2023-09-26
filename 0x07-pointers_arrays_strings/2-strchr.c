#include "main.h"
#include <stddef.h>

/**
 * _strchr - function to locate a char in a string.
 * @s: pointer to the string.
 * @c: the char to be located.
 *
 * Return: pointer to c or NULL;
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
