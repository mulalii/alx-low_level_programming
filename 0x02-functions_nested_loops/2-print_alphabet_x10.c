#include "main.h"
/**
 * Description - print alphabet ten times
 *
 *print alphabet - print alphabet 10 times
 *
 * Return: always (success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		i++;
	}
}
