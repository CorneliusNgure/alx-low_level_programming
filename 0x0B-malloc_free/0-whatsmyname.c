#include <stdio.h>

/**
 * main - entry point.
 * @argc: # of arguments.
 * @argv: pointer to the array of strings.
 * Return: void.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[0]);
		}
	}

	return (0);
}

