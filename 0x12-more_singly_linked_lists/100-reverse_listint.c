#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to a pointer to a linked list
 *
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *temp2;

	temp1 = *head;
	if (temp1)
	{
		if (temp1->next)
		{
			temp2 = temp1->next;
			temp1->next = NULL;
			if (temp2->next == NULL)
			{
				temp2->next = *head;
				*head = temp2;
				return (*head);
			}
			temp1 = temp2->next;
			temp2->next = *head;
			*head = temp2;
		}
		while (temp1->next)
		{
			temp2 = temp1->next;
			temp1->next = *head;
			*head = temp1;
			if (temp2->next == NULL)
			{
				temp2->next = *head;
				*head = temp2;
				return (*head);
			}
			temp1 = temp2->next;
			temp2->next = *head;
			*head = temp2;
		}
		return (*head);
	}
	return (NULL);
}
