#include "main.h"
#include <stdio.h>
/**
 * create_array - a function that creates an array of chars and initializes it
 * @size: char variable for size of array
 * @c: variable to insert
 * Return: NULL if size is 0
 * pointer to array if everything is normal
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
