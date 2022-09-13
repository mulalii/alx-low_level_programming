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
	char a = 'a';
	int i = 0;

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
