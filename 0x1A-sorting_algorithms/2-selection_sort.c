#include "sort.h"

/**
 * selection_sort - sort an arraw of integers in ascending order
 * @array: array of integers to sort
 * @size: size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp;

	for (j = 0; j < size - 1; j++)
	{
		min = j;
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[min])
				min = i;
		}
		if (min != j)
		{
			temp = array[j];
			array[j] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
