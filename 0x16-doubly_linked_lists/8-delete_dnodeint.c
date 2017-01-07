#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a specific node in a dlistint_t type list
 * @head: pointer to a pointer to the first node in the list
 * @index: index of the node to delete, starting at 0
 *
 * Return: 1 if success, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *target, *prev, *next;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	target = *head;
	i = 0;
	while (target->prev)
		target = target->prev;
	if (index == 0)
	{
		if (target->next == NULL)
		{
			*head = NULL;
			return (1);
		}
		next = target->next;
		target->next = NULL;
		next->prev = NULL;
		*head = next;
		return (1);
	}
	while (target && i < index - 1)
	{
		target = target->next;
		if (target == NULL && index - i > 0)
			return (-1);
		i++;
	}
	prev = target;
	target = target->next;
	next = target->next;
	prev->next = next;
	next->prev = target->prev;
	target->next = NULL;
	target->prev = NULL;
	return (1);
}
