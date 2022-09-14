#include <stlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - find positive or negative
 * Return: Always 0 (success)
 */
void positive_or_negative(int i)
{
int n;

	srand(time(0));
	n = i;

	if (n > 0)
	printf("%d is positive\n", n);
	if (n == 0)
	printf("%d is zero\n", n);
	if (n < 0)
{
	printf("%d is negative\n", n);
}
return (0);
}
/**
 * main - debugging example
 * Return: 0
 */

{
	int i;
	int j;
	int k;

	i = 0;
	j = 1000;
	while (i < j)
	{
		k = j / 98;
		i = i + k;
		printf("%d\n", i);
		j == j - 1;
	}
	return (0);
}
