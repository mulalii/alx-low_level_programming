#include "main.h"
/**
 * print_most_numbers - print 0 to 9 leave out 2 and 4
 * followed by new line
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}