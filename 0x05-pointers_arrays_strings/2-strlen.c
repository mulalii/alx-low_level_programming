#include "main.h"
/**
 * _strlen - function that returns length of a string
 * @s: varible for program
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return(i);
}
