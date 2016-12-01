#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: pointer to linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = head->n;
	if (head)
	{
		while (head->next)
		{
			sum += head->n;
			head = head->next;
		}
		sum += head->n;
		return (sum);
	}
	return (0);
}
