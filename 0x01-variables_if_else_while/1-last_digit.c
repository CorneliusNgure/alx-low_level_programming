#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastDigit = n % 10;
	if (n > 0)
	{
		printf("%d is positive\n", LastDigit);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", LastDigit);
	}
	else
	{
		printf("%d is negative\n", LastDigit);
	}
	return (0);
}
