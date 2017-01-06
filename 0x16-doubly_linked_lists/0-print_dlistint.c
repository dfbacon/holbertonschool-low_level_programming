#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint_t type list
 * @h: pointer to list to print
 *
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_count;
	const dlistint_t *temp;

	temp = h;
	node_count = 0;
	if (temp)
	{
		while (temp->next)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
			node_count++;
		}
		printf("%d\n", temp->n);
		node_count++;
	}
	return (node_count);
}
