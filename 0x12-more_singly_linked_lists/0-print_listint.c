#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer of const listint_t type
 *
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	if (h)
	{
		while(h->next)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	printf("%d\n", h->n);
	i++;
	}
	return (i);
}
