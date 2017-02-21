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
	size_t up, down;
	int partition;

	up = 0;
	down = size - 1;
	partition = array[size - 1];
	if (down <= up)
		return (up);
	while (true)
	{
		while ((array[up] < partition) == true)
			up++;
		while ((partition < array[down]) == true && (up < down))
			down--;
		if (up >= down)
			break;
		quick_swap(array, up, down, size);
		up++;
		down--;
	}
	quick_swap(array, up, down, size);
	return (up);
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

	if(end - start < 2)
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
	int pivot;

	sort(array, 0, size - 1, size);
}
