#include "sort.h"

/**
 * bubble_sort - sort an array of integers in ascending order using the
 * Bubble sort algorithm
 *
 * @array: pointer to array to be sorted
 * @size: size of @array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
}
