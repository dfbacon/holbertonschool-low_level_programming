#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position in a
 * dlistint_t type list
 * @h: pointer to pointer to head of list
 * @idx: index of where the new node should be added, starting from 0
 * @n: value of new node
 *
 * Return: address of new node, or NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *target;
	unsigned int i;

	if (*h == NULL && idx != 0)
		return (NULL);
	target = *h; i = 0;
	while (target->next)
		target = target->next; i++;
	if (idx > i)
		return (NULL);
	target = *h; i = 0;
	if (idx > 0)
	{
		while (i < idx - 1)
		{
			if (*h == NULL)
				return (NULL);
			target = target->next; i++;
		}
	}
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = target;
		if (*h == NULL)
			new->next = NULL;
		new->prev = NULL;
		if (*h)
			target->prev = new;
		*h = new;
		return (new);
	}
	new->next = target->next;
	(target->next)->prev = new;
	target->next = new;
	new->prev = target;
	return (new);
}
