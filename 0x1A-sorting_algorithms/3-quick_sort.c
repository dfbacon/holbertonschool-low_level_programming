#include "sort.h"

/**
 * quick_swap - swap two values
 * @first: first value
 * @second: second value
 *
 * Return: void
 */
void quick_swap(int *array, int first, int second, size_t size)
{
	int temp;

	temp = array[first];
	array[first] = array[second];
	array[second] = temp;
	print_array(array, size);
}

/**
 * set_pivot - set pivot value for quick_sort
 * @array: array of integers to sort
 * @size: size of @array
 *
 * Return: pivot in center position
 */
int set_pivot(int *array, int start, int stop, size_t size)
{
	int up, down, pivot;

	pivot = array[start];
	up = start - 1;
	down = stop;
	while (true)
	{
		while (array[up] < pivot)
			up++;
		while ((pivot < array[down]) && (up < down))
			down--;
		if (up < down)
			quick_swap(array, up, down, size);
		else
			return (down + 1);
	}
}

/**
 * sort - helper function for quick_sort
 * @array: array of integers to sort
 * @start: left-most element of @array
 * @stop: right-most element of @array
 * @size: size of @array
 *
 * Return: void
 */
void sort(int *array, int start, int stop, size_t size)
{
	int partition;

	if(stop - start < 2)
		return;
	partition = set_pivot(array, start, stop, size);
	sort(array, start, partition, size);
	sort(array, partition, stop, size);
}

/**
 * quick_sort - sort an array of integers in ascending order using quick sort
 * @array: array of integers to be sorted
 * @size: size of @array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	sort(array, 0, size - 1, size);
}
