#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - create an array of integers
 * @min: minimum number of integers
 * @max: maximum number of integers
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array;
	int array_size, i, counter;

/* if min > max then return NULL */
	if (min > max)
		return (NULL);

/* array has all values from (and including) min to max */
	array_size = (max - min) + 1;
	array = malloc(array_size * sizeof(*array));
	if (array == NULL)
		return (NULL);
/* array ordered from min to max */
	i = min;
	counter = 0;
	while (counter <= array_size)
	{
		if (counter == 0)
			array[counter] = min;
		else if  (counter == array_size)
			array[counter] = max;
		else
			array[counter] = i;
		i++;
		counter++;
	}
/* add \0 to the end?? */
	array[counter] = '\0';
	return (array);
}
