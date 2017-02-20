#include "sort.h"

/**
 * is_less - evaluates two elements
 * @first: first element
 * @second: second element
 *
 * Return: true or false
 */
bool is_less(int first, int second)
{
	return (first < second);
	printf("bool is working\n");
}

/**
 * quick_swap - swap two values
 * @first: first value
 * @second: second value
 *
 * Return: void
 */
void quick_swap(int first, int second)
{
	int temp;

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
	int up, down, partition;

	printf("entering set_pivot\n");
	up = start;
	printf("up = %d\n", up);
	down = stop;
	printf("down = %d\n", down);
	partition = array[stop];
	printf("partition = %d\n", partition);
	if (up >= down)
	{
		printf("exiting here?\n");
		return (start);
	}
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
 * Return: sorted @array
 */
int *sort(int *array, size_t start, size_t stop)
{
	int pivot;

	printf("entering sort\n");
	if (start <= stop)
		return (NULL);
	pivot = set_pivot(array, start, stop);
	sort(array, start, pivot - 1);
	sort(array, pivot + 1, stop);
	printf("exiting sort\n");
	return (array);
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

	printf("starting quick_sort\n");
	start = array[0];
	printf("start value = %lu\n", start);
	stop = array[size - 1];
	printf("stop value = %lu\n", stop);
	sort(array, start, stop);
	printf("exiting quick_sort\n");
}
