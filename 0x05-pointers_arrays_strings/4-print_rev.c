#include "main.h"
/**
 * print_rev - reverses a string
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int str = 0;
	int n;

	while (*s != '\0')
	{
		str++;
		s++;
	}
	s--;
	for (n = str; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
