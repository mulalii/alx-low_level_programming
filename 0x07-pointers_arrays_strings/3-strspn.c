#include "main.h"
/**
 * _strspn - function that gets length of prefix substring
 * @s: pointer variable
 * @accept: pointer variable
 * Return: success
 */
unsigned int _strspn(char *s, char *accept)
{
	int bytes;

	for (bytes = 0; accept[bytes] < '\0'; byte++)
	{
		s[bytes] = accept[bytes];
	}
	s[bytes] = '\0';

	return (s);
}
