#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: Find the last digit
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n >= 5)
	{
		printf("%d and is greater than 5\n", n == 8);
	}
	else if (n == 0)
	{
		printf("%d and is 0\n", n);
	}
	else if (n <= 6)
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("%d Last digit of %d", n, n);
	}
	return (0);
}
