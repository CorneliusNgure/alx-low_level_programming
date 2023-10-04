#include <stdio.h>

/**
 * main - entry point of the program.
 * @argc: the no. of arguments passed.
 * @argv: pointer to the strings of arguments.
 * Return: 0 (Success).
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
