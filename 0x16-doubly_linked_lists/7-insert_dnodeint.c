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

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	i = 0;
	target = *head;
	while (i < index - 1)
	{
		target = target->next;
		if (target == NULL)
			return (NULL);
		i++;
	}
	if (index == 0)
	{
		*head = new;
		new->next = target;
	}
	else if (target->next)
	{
		new->next = target->next;
		target->next = new;
	}
	else
	{
		new->next = NULL;
		target->next = new;
	}
	return (new);
}
