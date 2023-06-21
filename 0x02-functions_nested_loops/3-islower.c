#include "main.h"

/**
 *_islower - checks if the character is in lower or upper case.
 *
 *@c: this is the char to be checked.
 * Return: if lowercase return non-zero number and 0 if uppercase.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);

}
