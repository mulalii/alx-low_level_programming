#include "main.h"
/**
 * print_last_digit - return last digit
 * @num : number to check
 * Return: the last digit of the number
 */
int print_last_digit(int num)
{
	int val;

	if (num < 0)
		val = -1 * (num % 10);
	else
		val = num % 10;

	_putchar(val + '0');
	return (val);
}
