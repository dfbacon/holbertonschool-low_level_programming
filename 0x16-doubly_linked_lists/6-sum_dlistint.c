#include "lists.h"

/**
 * sum_dlistint - sum the data located in a dlistint_t type list
 * @head: first node in list
 *
 * Return: sum of data in list located @head, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	temp = head;
	if (head == NULL)
		return (0);
	while (temp->prev)
		temp = temp->prev;
	while (temp->next)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
	return (sum);
}
