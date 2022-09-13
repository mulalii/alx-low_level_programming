#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: a program that prints putchar.c
 * Return: Always (success)
 */
int main(void)
{
	char text[] = "_putchar";
	int w = 0;

	while (text[w] != '\0')
	{
		putchar(text[w]);
		w++;
	}
	putchar('\n');
		return (0);
}
