#include "main.h"
/**
 * print_numbers - print 1 to 14 ten times
 * followed by new line
 */
void print_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j);
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
