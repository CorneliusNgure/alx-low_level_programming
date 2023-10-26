#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - convert binary to unsigned int.
 * @b: string to be converted.
 *
 * Return: the converted no, 0 or NULL otherwise.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			result <<= 1;

		else if (b[i] == '1')
			result = (result << 1) | 1;
		else
			return (0);
	}

	return (result);
}
