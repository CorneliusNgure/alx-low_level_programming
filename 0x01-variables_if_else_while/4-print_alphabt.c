#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e')
		{
			alphabet++;
			continue;
		}
		else if (alphabet == 'q')
		{
			alphabet++;
			continue;
		}
			putchar(alphabet);
			alphabet++;
	}
	putchar('\n');
	return (0);
}
