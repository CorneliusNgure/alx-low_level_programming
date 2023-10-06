#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: size of the malloc allocated memory.
 *
 * Return: ptr to the newly allocated space, NULL otherwise.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length;
	unsigned int s2_length;
	unsigned int max_length;
	char *joined_string;

	s1_length = strlen(s1);
	s2_length = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	max_length = (n >= s2_length) ? s2_length : n;

	joined_string = malloc(s1_length + max_length + 1);

	if (joined_string == NULL)
	{
		return (NULL);
	}

	strcpy(joined_string, s1);

	if (n < s2_length)
	{
		strncat(joined_string, s2, n);
	}
	else
	{
		strcat(joined_string, s2);
	}
	return (joined_string);
}
