#include "main.h"
/**
 * string_toupper -converts all letters of a string from lowercase to uppercase
 *
 * @string: pointer to a string.
 *
 * Return: string
 */
char *string_toupper(char *string)
{
	int i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (string);
}
