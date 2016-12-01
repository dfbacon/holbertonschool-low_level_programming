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
	int value_save;

	target = *head;
	if (target == NULL)
		return (0);
	if (target->next)
	{
		*head = target->next;
		value_save = target->n;
		free(target);
		return (value_save);
	}
}
