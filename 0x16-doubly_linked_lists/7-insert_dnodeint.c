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

	if (head == NULL && idx != 0)
		return (NULL);
	target = *head;
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
		*head = new;
		return (new);
	}
	i = 0;
	while (i < idx - 1)
	{
		target = target->next;
		if (target == NULL)
		{
			free(new);
			return (NULL);
		}
		i++;
	}
	prev = target->prev;
	new->n = n;
	new->prev = prev;
	new->next = target;
	target->prev = new;
	prev->next = new;
	return (new);
}
