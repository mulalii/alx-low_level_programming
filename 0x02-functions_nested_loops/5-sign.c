#include "main.h"
/**
 * print_sign - check number for sign
 * @num: number to check
 * Return: 0 or 1
 */
int print_sign(int num)
{
	int val;

	if (num > 0)
	{
		val = 1;
		_putchar('+');
	}
	else if (num == 0)
	{
		val = 0;
		_putchar('0');
	}
	else if (num < 0)
	{
		val = -1;
		_putchar('-');
	}
	return (val);
}
