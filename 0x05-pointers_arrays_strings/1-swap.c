#include "main.h"
/**
 * swap_int - a code that swaps int value
 * @a: first variable
 * @b: second varible
 * Return: Always (success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
