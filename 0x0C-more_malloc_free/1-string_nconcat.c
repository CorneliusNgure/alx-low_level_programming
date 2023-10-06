#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	unsigned int bytes_to_concatenate;
	char *result;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}

	bytes_to_concatenate = (n < len_s2) ? n : len_s2;
	result = malloc(len_s1 + bytes_to_concatenate + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < bytes_to_concatenate; i++)
	{
		result[len_s1 + i] = s2[i];
	}

	result[len_s1 + bytes_to_concatenate] = '\0';

	return (result);
}
