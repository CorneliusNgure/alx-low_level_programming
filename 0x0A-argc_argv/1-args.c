#include <stdio.h>

/**
 * main - entry point.
 * @argc: no. of args.
 * @argv: ptr to strings.
 * Return: void.
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
