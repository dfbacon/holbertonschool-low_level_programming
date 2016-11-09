#include <stdlib.h>

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

	array = malloc(size * sizeof(*array));
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
