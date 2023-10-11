#include "function_pointers.h"

/**
 * print_name - prints name.
 * @name: ptr to the name to be printed.
 * @f: function pointer to name.
 *
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
