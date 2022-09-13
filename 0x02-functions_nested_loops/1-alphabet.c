#include "main.h"
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	char a = 'a';

	while(a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
