#include <stdio.h>
/**
 * main - script to rev alphabet
 *
 * Return: Always (success)
 */
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
