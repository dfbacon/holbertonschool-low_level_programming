#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - create array of a given size
 * @size: size of array
 * @c: character to print
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	if (size > 0)
		array = malloc(size * sizeof(*array));
	else
		return (NULL);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] == c;
		i++;
	}
	return (array);
}
