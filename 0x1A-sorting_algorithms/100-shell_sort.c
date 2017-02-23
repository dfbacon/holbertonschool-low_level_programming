#include "sort.h"

/**
 * shell_sort - sort an array of integers using shell sort algorithm
 * @array: array of integers to be sorted
 * @size: size of @array
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap;
	int temp;

	gap = 1;
	while (gap < size / 3)
		gap = gap * 3 + 1;
	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
		{
			for (j = i; j >= gap && array[j] < array[j - gap];
			     j -= gap)
			{
				temp = array[j];
				array[j] = array[j - gap];
				array[j - gap] = temp;
			}
		}
		print_array(array, size);
		gap /= 3;
	}
}
