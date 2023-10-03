#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns ptr to a duplicated string.
 * @str: original string ptr.
 *
 * Return: ptr to the duplicated string, NULL otherwise.
 */

char *_strdup(char *str)
{
	char *str_duplicate;

	if (str ==  NULL)
	{
		return (NULL);
	}

	str_duplicate = malloc(strlen(str) + 1);

	if (str_duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(str_duplicate, str);

	return (str_duplicate);
}
