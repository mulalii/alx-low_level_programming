#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9,
 * followed by new line
 * Return: Always (success)
 */
void print_numbers(void)
{
	int i;

	i = '0';
	while (i < 10)
	{
		i++;
		putchar(i + '0');
	}
	putchar('\n');
}
