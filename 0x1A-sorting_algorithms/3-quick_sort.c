#include "sort.h"

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
	size_t up, down;
	int partition;

	printf("entering set_pivot\n");
	up = array[0];
	down = array[size - 1];
	partition = array[size - 1];
	/**
	if (up >= down)
	{
		printf("exiting here\n");
		return (up);
	}
	*/
	while (true)
	{
		printf("Entering while true loop\n");
		while ((array[up] < partition) == true)
		{
			printf("entering first is_less\n");
			printf("value of up = %lu\n", up);
			up++;
		}
		while ((partition < array[down]) == true && (up < down))
		{
			printf("down = %lu\n", down);
			down--;
		}
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
