#include "lists.h"

/**
 * pop_listint - delete head node, return its data
 * @head: pointer to a pointer to data
 *
 * Return: data from head node
 */
int pop_listint(listint_t **head)
{
	listint_t *target, *temp;

	if (*head)
	{
		target = *head;
		if (target->next)
		{
			temp = target->next;
			*head = temp;
			return (target->n);
		}
	}
	return (0);
}
