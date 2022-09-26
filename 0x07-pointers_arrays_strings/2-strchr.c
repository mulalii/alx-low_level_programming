#include "main.h"
/**
 * _strchr - locate character in a string
 * @s: sring variable
 * @c: character variable
 */
char *_strchr(char *s, char c)
{
	int v;

	for (v = 0; s[v] < '\0'; v++)
	{
		if (s[v] == c)
		{
			return(s + v);
		}
	}
	return(0);
}
