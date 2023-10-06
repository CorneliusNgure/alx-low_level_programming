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
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	unsigned int max_length;
	char *joined_string;
	unsigned int i;

	while (s1[s1_length] != '\0')
		s1_length++;

	while (s2[s2_length] != '\0')
		s2_length++;
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

	for (i = 0; i < s2_length; i++)
	{
		joined_string[i] = s1[i];
	}

	for (i = 0; i < max_length; i++)
	{
		joined_string[s1_length + i] = s2[i];
	}
	joined_string[s1_length + max_length] = '\0';
	return (joined_string);
}
