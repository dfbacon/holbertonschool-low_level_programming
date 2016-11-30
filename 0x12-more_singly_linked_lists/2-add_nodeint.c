#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer of type listint_t
 * @n: int being passed
 *
 * Return: NULL if fail, otherwise pointer to new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	i = n;
	new->n = i;
	new->next = *head;
	*head = new;
	return (*head);
}
