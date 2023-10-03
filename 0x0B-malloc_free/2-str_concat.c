#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - returns a ptr to the memory conataining concatenated strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: ptr to concatenated str, NULL otherwise.
 */

char *str_concat(char *s1, char *s2)
{
	char *joined_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	joined_string = malloc(strlen(s1) + strlen(s2) + 1);

	if (joined_string == NULL)
	{
		return (NULL);
	}

	strcpy(joined_string, s1);
	strcat(joined_string, s2);

	return (joined_string);
}
