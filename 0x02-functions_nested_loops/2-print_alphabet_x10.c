#include "main.h"
/**
 * print_alphabet - print alphabet ten times
 *
 * Return: always (success)
 */
void print_alphabet_x10(void)
{
	char a = 0;
	char c = a;

	while(a <= 10)
	{
		while(c <= 'z')
		{
			_putchar(c);
		}
		_putchar(a);
	}
}
