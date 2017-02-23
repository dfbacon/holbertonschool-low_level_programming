#include "sort.h"

/**
 * selection_sort - sort an array of integers using selection sort algorithm
 * @array: array of integers
 * @size: size of @array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_val, temp;

	for (i = 0; i < (size - 1); i++)
	{
		min_val = i;
		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[i] && array[j] < array[min_val])
			{
				min_val = j;
			}
		}
		if (min_val != i)
		{
			temp = array[i];
			array[i] = array[min_val];
			array[min_val] = temp;
			print_array(array, size);
		}

	}
}
