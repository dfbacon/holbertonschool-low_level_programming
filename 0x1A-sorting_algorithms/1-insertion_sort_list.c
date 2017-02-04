#include "sort.h"

/**
 * insertion_sort_list - write a function that sorts a doubly linked list of
 * integers in ascending order using the insertion sort algorithm
 *
 * @list: list to be sorted
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *placeholder;
	size_t i, j;

	temp = malloc(sizeof(*temp));
	if (temp == NULL)
		return;

	placeholder = malloc(sizeof(*placeholder));
	if (placeholder == NULL)
		return;

	temp = *list;

	i = 1;
	while (i < sizeof(list))
	{
		placeholder = temp[i];
		j = i - 1;
		while (temp[j] > placeholder)
		{
			temp[j + 1] = temp[j];
			print_list(temp);
			j--;
		}
		temp[j + 1] = temp;
		i++;
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	listint_t *list;
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	list = create_listint(array, n);
	if (!list)
		return (1);
	print_list(list);
	printf("\n");
	insertion_sort_list(&list);
	printf("\n");
	print_list(list);
	return (0);
}
