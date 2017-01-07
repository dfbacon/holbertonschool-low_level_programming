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
	while (temp->next)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
	return (sum);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	int sum;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	sum = sum_dlistint(head);
	printf("sum = %d\n", sum);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
