#include <stdio.h>
/**
 * main - entry point
 * Description: print alphabet in order
 * Return: 0;
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z' && '\n' ; ch++)
		putchar(ch);
	return (0);
}
