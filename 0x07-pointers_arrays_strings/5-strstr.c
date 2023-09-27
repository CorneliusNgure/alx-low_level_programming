#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the string from where to search.
 * @needle: the string to be searched.
 *
 * Return: substing found; return pointer to the start or NULL otherwise.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return ('\0');
}

