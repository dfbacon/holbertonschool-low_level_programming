#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers, using
 * Linear search algorithm
 *
 * Other requirements:
 * Must print every value that you compare to @value
 * If array is NULL or @value is not found, return -1
 *
 * @array: pointer to first element of the array to search
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: first index where @value is located in @array, or -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t scope;

	if (array && size > 0)
	{
		scope = 0;
		while (scope < size)
		{
			printf("Value checked array[%lu] = [%d]\n",
			       scope, array[scope]);
			if (array[scope] == value)
				return (scope);
			scope++;
		}
	}
	return (-1);
}
