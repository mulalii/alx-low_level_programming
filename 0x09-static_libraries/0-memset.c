#include "main.h"
#include <stdio.h>
/**
 * *_memset - A function that fills memory with a constant byte
 * @n: the size of the memory to print
 * @s: pointer for n
 * @b: constant byte
 * Return: success
 */
char *_memset(char *s, char b, unsigned int n)
{

	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
