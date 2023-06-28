#include "main.h"

/**
 * puts2 - prints characters of a string.
 *
 * @str: string reference.
 *
 * Return: 0
 */

void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}
