#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point.
 *
 * @argc: # of arguments passed.
 * @argv: pointer to the arguments.
 *
 * Return: 0 on error free and 1 on error.
 */
int main(int argc, char *argv[])
{
	int sum = 0, error = 0, i, j, num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				error = 1;
				break;
			}
		}
		if (!error)
		{
			num = atoi(argv[i]);

			if (num > 0)
				sum += num;
			else
			{
				error = 1;
				break;
			}
		}
		else
			break;
	}
	if (error)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}
