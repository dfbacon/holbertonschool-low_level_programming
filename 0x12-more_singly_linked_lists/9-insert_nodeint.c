#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to a linked list
 * @index: position to insert new node
 * @n: value of new node
 *
 * Return: NULL if fail, otherwise address of new element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *temp, *new;
	unsigned int i;

	if (head)
	{
		temp = *head;
		if (index == 0)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = *head;
			*head = new;
			return (new);
		}
		while (temp->next)
		{
			i = 0;
			while (i < (index - 1))
			{
				temp = temp->next;
				if (temp->next == NULL)
					return (NULL);
				i++;
			}
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		if (temp->next == NULL)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n;
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		return (NULL);
	}
	return (NULL);
}
