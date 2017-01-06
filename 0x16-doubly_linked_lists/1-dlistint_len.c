#include "lists.h"

/**
 * dlistint_len - return the number of elements in a dlistint_t type list
 * @h: pointer to list to analyze
 *
 * Return: the number of elements in the @h list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count;
	const dlistint_t *temp;

	temp = h;
	node_count = 0;
	if (temp)
	{
		while (temp->next)
		{
			temp = temp->next;
			node_count++;
		}
		node_count++;
	}
	return (node_count);
}
