#include "sort.h"

/**
 * merge_sort - sort array of integers using merge sort
 * @array: array of integers
 * @size: size of @array
 *
 * Return: void
 */
void merge_sort(int *array, size_t size)
{
	int *temp;

	temp = malloc(sizeof(*temp) * size);
	if (temp == NULL)
		return;

	merge_sort_helper(array,temp, size);
}

/**
 * merge_sort_helper - helper function for merge_sort
 * @array: array of integers
 * @temp: working array of integers
 * @size: size of @array and @temp
 *
 * Return: void
 */
void merge_sort_helper(int *array, int *temp, size_t size)
{
	int start;

	start = 0;
	copy_array(array, start, size, temp);
	merge_sort_split(temp, start, size, array);
}

/**
 * merge_sort_split - split array into sub arrays, sort recursively
 * @temp: working array of integers
 * @start: head of @temp
 * @end: index of final element in @temp
 * @array: array of integers
 *
 * Return: void
 */
void merge_sort_split(int *temp, int start, size_t end, int *array)
{
	size_t split;

	if (end - start < 2)
		return;
	split = (end + start) / 2; /* split is midpoint */
	merge_sort_split(array, start, split, temp);
	merge_sort_split(array, split, end, temp);
	merge_sort_top_down(temp, start, split, end, array);
}

/**
 * merge_sort_top_down - merge sorted working array to final sorted array
 * @temp: working array of integers
 * @start: head index
 * @split: middle index
 * @end: last index
 * @array: array of integers
 *
 * Return: void
 */
void merge_sort_top_down(int *temp, int start, size_t split, size_t end,
			 int *array)
{
	size_t i, j, k;

	i = start;
	j = split;
	for (k = i; k < end; k++)
	{
		if (i < split && (j >= end || temp[i] <= temp[j]))
		{
			array[k] = temp[i];
			i += 1;
		}
		else
		{
			array[k] = temp[j];
			j += 1;
		}
	}
}

/**
 * copy_array - copy values from one array to another
 * @array: base array of integers
 * @start: head element of @array
 * @size: size of @array
 * @temp: new array to be copied into
 *
 * Return: void
 */
void copy_array(int *array, int start, size_t size, int *temp)
{
	size_t temp_val;

	for (temp_val = start; temp_val < size; temp_val++)
		temp[temp_val] = array[temp_val];
}
