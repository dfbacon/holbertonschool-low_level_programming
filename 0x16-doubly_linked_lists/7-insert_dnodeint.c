#include "lists.h"

/**
 * insert_dnodeint_at_idx - insert a new node at a given position in a
 * dlistint_t type list
 * @h: pointer to pointer to head of list
 * @idx: index of where the new node should be added, starting from 0
 * @n: value of new node
 *
 * Return: address of new node, or NULL if fail
 */
dlistint_t *insert_dnodeint_at_idx(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *target;
	unsigned int i;

	if (*h == NULL && idx > 0)
		return (NULL);
	target = *h;
	if (idx > 0)
	{
		i = 0;
		while (tmp->next && i < idx - 1)
		{
			target = target->next;
			i++;
		}
		if (i < idx - 1)
			return (NULL);
	}
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->prev = NULL;
		new->next = target;
		if (target)
			target->prev = new;
		*h = new;
		return (new);
	}
	new->n = n;
	new->prev = target;
	new->next = target->next;
	if (target->next)
		(target->next)->prev = new;
	target->next = new;
	return (new);
}
