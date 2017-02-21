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
 * @size: size of @array
 *
 * Return: pivot in center position
 */
int set_pivot(int *array, size_t size)
{
	size_t up, down, partition;

	printf("entering set_pivot\n");
	up = array[0];
	printf("up = %lu\n", up);
	down = array[size - 1];
	printf("down = %lu\n", down);
	partition = array[size - 1];
	printf("partition = %lu\n", partition);
	if (up >= down)
	{
		printf("exiting here?\n");
		return (up);
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
 * quick_sort - sort an array of integers in ascending order using quick sort
 * @array: array of integers to be sorted
 * @size: size of @array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	int pivot;

	printf("entering sort\n");
	if (array[0] <= array[size - 1])
		return;
	pivot = set_pivot(array, size);
	printf("pivot = %d\n", pivot);
	/* need to make recursive calls */
	printf("exiting sort\n");
}
