#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * and print the last digit of the number stored in the variable n
 * Return: Always (success)
 */
void positive_or_negative(int i))
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
/**
 * main - debugging example
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);
	return (0);
}
