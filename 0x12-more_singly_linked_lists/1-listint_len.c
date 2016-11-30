#include "lists.h"

/**
 * listint_len - determine the number of elements in a linked listint_t list
 * @h: pointer of const listint_t type
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	if (h)
	{
		while (h->next)
		{
			h = h->next;
			i++;
		}
		i++;
	}
	return (i);
}
