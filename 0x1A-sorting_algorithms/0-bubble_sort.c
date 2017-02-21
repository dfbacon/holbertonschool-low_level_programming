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
	size_t i, j, flag;
	int temp;

	flag = 0;
	if (size <= 1)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
