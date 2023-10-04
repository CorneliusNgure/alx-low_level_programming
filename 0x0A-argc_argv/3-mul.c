#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * @argc: number of args.
 * @argv: string of arguments.
 * Return: 0, Success.
 */

int main(int argc, char *argv[])
{
	int x, y, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	product = x * y;

	printf("%d\n", product);


	return (0);
}
