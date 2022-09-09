#include <stdio.h>
/**
 * main - entry point
 * Description: print uppercase alphabet
 * Return: 0
 */
int main(void)
{
	char ch = A;

	for (ch = A; ch < Z; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return 0;
}
