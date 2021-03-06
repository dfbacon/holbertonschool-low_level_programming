#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elements of a list_t type list
 * @h: pointer of list_t type
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *temp;

	temp = h;
	i = 0;
	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			printf("[%d] %s\n", temp->len, temp->str);
			temp = temp->next;
			i++;
		}
		printf("[%d] %s\n", temp->len, temp->str);
		i++;
	}
	return (i);
}
