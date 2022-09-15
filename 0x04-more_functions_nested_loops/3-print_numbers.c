#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9,
 * followed by new line
 * Return: Always (success)
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i < 10; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
