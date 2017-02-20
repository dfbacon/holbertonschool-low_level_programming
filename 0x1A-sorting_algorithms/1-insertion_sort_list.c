#include "sort.h"

/**
 * get_node_at_index - locate the nth node of a listint_t type list
 * @head: pointer to first node in list
 * @index: index of the node to locate
 *
 * Return: the node at location @index
 */
listint_t *get_node_at_index(listint_t *head, size_t index)
{
	size_t size;

	if (head == NULL)
		return (NULL);
	for (size = 0; size < index && head != NULL; size++)
		head = head->next;
	if (size != index)
		return (NULL);
	return (head);
}

/**
 * list_len - return the number of elements in a listint_t type list
 * @head: pointer to list to analyze
 *
 * Return: the number of elements in the @head list
 */
size_t list_len(const listint_t *head)
{
	size_t node_count;

	node_count = 0;
	while (head)
	{
		head = head->next;
		node_count++;
	}
	return (node_count);
}

/**
 * swap - swaps pointers of listint_t nodes
 * @node_a: first node
 * @node_b: second node
 *
 * Return: void
 */
void swap(listint_t *node_a, listint_t *node_b)
{
	if (node_a->prev)
		(node_a->prev)->next = node_b;
	if (node_b->next)
		(node_b->next)->prev = node_a;
	node_a->next = node_b->next;
	node_b->prev = node_a->prev;
	node_a->prev = node_b;
	node_b->next = node_a;
}

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
	size_t i, j, length;

	length = list_len(*list);
	if (length <= 1)
		return;
	for (i = 1; i < length; i++)
	{
		temp = get_node_at_index(*list, i);
		j = i;
		while (j > 0 && temp->prev && (temp->prev)->n > temp->n)
		{
			swap(temp->prev, temp);
			j--;
			if (temp->prev == NULL)
				*list = temp;
			print_list(*list);
		}
	}
}
