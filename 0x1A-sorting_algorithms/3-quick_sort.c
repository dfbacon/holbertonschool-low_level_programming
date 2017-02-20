#include "sort.h"

/**
 * is_less - evaluates two elements
 * @first: first element
 * @second: second element
 *
 * Return: true or false
 */
bool is_less(size_t first, size_t second)
{
	return (first < second);
}

/**
 * quick_swap - swap two values
 * @first: first value
 * @second: second value
 *
 * Return: void
 */
void quick_swap(size_t first, size_t second)
{
	size_t temp;

	temp = first;
	first = second;
	second = temp;
}

/**
 * set_pivot - set pivot value for quick_sort
 * @array: array of integers to sort
 * @start: left-most element in @array
 * @stop: right-most element in @array
 *
 * Return: pivot in center position
 */
int set_pivot(int *array, size_t start, size_t stop)
{
	size_t up, down, partition;

	up = start;
	down = stop - 1;
	partition = array[stop];
	if (up >= down)
		return (start);
	while (true)
	{
		while (is_less(array[up], partition))
			up++;
		while (is_less(partition, array[down]) && (up < down))
			down--;
		if (up >= down)
			break;
		quick_swap(array[up], array[down]);
		up++;
		down--;
	}
	quick_swap(array[up], array[down]);
	return (up);
}

/**
 * sort - helper function for quick_sort
 * @array: array of integers to be sorted
 * @start: left-most element of @array
 * @stop: right-most element of @array
 *
 * Return: void
 */
void sort(int *array, size_t start, size_t stop)
{
	size_t pivot;

	if (stop <= start)
		return;
	pivot = set_pivot(array, start, stop);
	sort(array, start, pivot - 1);
	sort(array, pivot + 1, stop);
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
	size_t start, stop;

	start = array[0];
	stop = array[size];
	sort(array, start, stop);
}
