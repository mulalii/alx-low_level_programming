#include "main.h"

/**
 * times_table - print time table
 * Return void
*/

void times_table(void)
{
	int a;
	int b;
	int num;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			num = a * b;
			if (b == 0)
			{
				_putchar('0' + num);
			}
			else if (num < 10)
			{
				_putchar(' ');
				_putchar('0' + num);
			}
			else
			{
				_putchar('0' + num / 10);
				_putchar('0' + num % 10);
			}

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
