#include "main.h"

/**
 * _print_rev_recursion - function thats prints a string in reverse.
 * @s: paramater string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
