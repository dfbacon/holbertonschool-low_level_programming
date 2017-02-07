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
	listint_t *temp;
	size_t i, j;

	temp = malloc(sizeof(*temp));
	if (temp == NULL)
		return;

	temp = *list;

	i = 1;
	while (i < sizeof(list)) /* might be sizeof(list) - 1) */
	{
		j = i - 1; /* set j to 0 */
		while (temp[j]->n > temp[j + 1]->n)
		{
			if (temp[j] == NULL)
				return;

			/* move prev pointer */
			if (temp[j]->prev != NULL)
			{
				temp[j + 1]->prev = temp[j]->prev;
				(temp[j + 1]->prev)->next = temp[j + 1];
			}
			else
				temp[j + 1]->prev = NULL;
			temp[j]->prev = temp[j + 1];

			/* move next pointer */
			if (temp[j + 1]->next != NULL)
			{
				temp[j]->next = temp[j + 1]->next;
				(temp[j]->next)->prev = temp[j];
			}
			else
				temp[j]->next = NULL;
			temp[j + 1]->next = temp[j];

			print_list(temp); /* print as per instruction */
			if (j > 0)
				j--;
			else
				continue; /* break? */
		}
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
