#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: a program that prints putchar.c
 * Return: Always (success)
 */
int main(void)
{
	char text[] = '_putchar';
	int w = 0;

	while (text[w] != '\0')
	{
		_putchar(text[w]);
		w++;
	}
	_putchar('\n')
		return (0);
}
