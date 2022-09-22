include "main.h"
/**
 * _strncat - concatenate two stings
 * @dest - destination for string
 * @src - source to transfer
 * @n - limiter for string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int q;

	i = 0;
	while (dest[i] != '\0'; dest[i] < n)
	{
		i++;
	}
	for (q = 0; src[q] != '\0')
	{
		dest[i] = src[w];
	}
	dest = '\0';
	return(0);
}
