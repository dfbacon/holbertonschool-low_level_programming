#include "search_algos.h"

/**
 * print_array - print a given subset of an array
 * @array: array
 * @min: minimum index to print
 * @max: maximum index to print
 *
 * Return: none
 */
void print_array(int *array, size_t min, size_t max)
{
	size_t scope;

	printf("Searching in array:");
	for (scope = min; scope < max; scope++)
		printf(" %d,", array[scope]);
	printf(" %d\n", array[scope]);
}

/**
 * binary_search - search foa a value in a sorted array of integers using
 * Binary seach algorithm
 *
 * Other Requirements:
 * Assume @array sorted in ascending order.
 * Assume @value appears no more than once in @array
 * Must print the new array, or subarray, you're searching through each time.
 * If @array is NULL or @value is not found, return -1.
 *
 * @array: pointer to first element of array to search
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: index where value is located, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t min, max, mid;

	if (array && size > 0)
	{
		min = 0;
		max = size - 1;
		while (min <= max)
		{
			print_array(array, min, max);
			mid = min + (max - min) / 2;
			if (array[mid] < value)
				min = mid + 1;
			else if (array[mid] > value)
				max = mid;
			else
				return (mid);
		}
	}
	return (-1);
}
