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
	dlistint_t *target, *new, *prev;
	unsigned int i;

	if (h == NULL && idx != 0)
		return (NULL);
	target = *h;
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		if (target)
		{
			new->next = target;
			target->prev = new;
		}
		else
			new->next = NULL;
		new->n = n;
		new->prev = NULL;
		*h = new;
		return (*h);
	}
	i = 0;
	while (i < idx - 1)
	{
		if (target == NULL)
			free(new); return (NULL);
		target = target->next;
		i++;
	}
	if (target == NULL)
		free(new); return (NULL);
	prev = target;
	target = target->next;
	prev->next = new;
	new->n = n;
	new->next = target;
	new->prev = prev;
	return (new);
}
