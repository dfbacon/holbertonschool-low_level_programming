#include "lists.h"

/**
 * pop_listint - delete head node, return its data
 * @head: pointer to a pointer to data
 *
 * Return: data from head node
 */
int pop_listint(listint_t **head)
{
	listint_t *target;

	if (*head)
	{
		target = *head;
		if (target->next)
		{
			*head = target->next;
			return (target->n);
		}
	}
	return (0);
}
