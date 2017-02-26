#include "sort.h"
#include <stdbool.h>

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
 * cocktail_sort_list - sort a doubly linked list using cocktail shaker sort
 * @list: pointer to array of doubly linked nodes
 *
 * Return: void
 */
void cocktail_sort_list(listint_t **list)
{
	int i, j, size;
	listint_t *temp;
	bool flag;

	size = list_len(*list);
	if (size <= 1)
		return;
	for (i = 0; i < size/2; i++)
	{
		flag = false;
		for (j = i; j < size - i - 1; j++)
		{
			temp = get_node_at_index(*list, j);
			if (temp->next && temp->n < (temp->next)->n)
			{
				swap(temp, temp->next);
				print_list(*list);
				flag = true;
			}
		}
		/**
		for (j = size - i - 2; j > i; j--)
		{
			temp = get_node_at_index(*list, j);
			if (temp->prev && temp->n > (temp->prev)->n)
			{
				swap(temp, temp->next);
				print_list(*list);
				flag = true;
			}
		}
		*/
		if (!flag)
			break;
	}
}
