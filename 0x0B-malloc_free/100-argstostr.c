#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenated the program's arguments.
 * @ac: the number of args.
 * @av: ptr to array of strings.
 *
 * Return: ptr to a new string, NULL otherwise.
 */

char *argstostr(int ac, char **av)
{
	int string_length = 0;
	int current_position = 0;
	int i;
	char *malloc_argstostr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			string_length += strlen(av[i]) + 1;
		}
	}

	malloc_argstostr = malloc(string_length + 1);

	if (malloc_argstostr ==  NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			strcpy(malloc_argstostr + current_position, av[i]);
			current_position += strlen(av[i]);
			malloc_argstostr[current_position] = '\n';
			current_position++;
		}
	}

	malloc_argstostr[current_position] = '\0';

	return (malloc_argstostr);
}
