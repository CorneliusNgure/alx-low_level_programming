#include "main.h"

/**
 * print_alphabet_x10 - printing alphabets using _putchar.
 *
 * Description: Prints all alphabets in lowercase and adds a new line.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
		i++;
	}

}
