#include "main.h"
/**
 * main - print alphabet
 *
 * Return: Always (success)
 */
void print_alphabet(void)
{
	char a = 'a';

	while(a < 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
