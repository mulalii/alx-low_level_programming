#include "main.h"
/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination for string
 * @src: source to transfer
 * @n: limiter for string
 *
 * Return: a pointer to the result desti
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int q;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (q = 0; src[q] != '\0'; q++)
	{
		q < n;
		dest[i] = src[q];
	}
	dest = '\0';
	return (dest);
}
