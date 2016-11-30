#include "lists.h"

/**
 * free_listint2 - free memory, set head to NULL
 * @head: pointer to a pointer of listint_t type, starting point
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *next;

	temp = *head;
	if (temp == NULL)
		return;

	while (temp)
	{
		next = temp;
		temp = temp->next;
		free(next);
	}
	*head = NULL;
}
