#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - assigns a random number to int m everytime
 * it executes, and prints it
 * Return: Always 0 (success)
 */
int positive_or_negative(int i)
{
	int n;

	n = i;
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n == 0)
	printf("%d is zero\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	return (0);
}
