#include <stdio.h>
#include "lists.h"

/**
 * check_node - check for unique nodes, and add to listint_t linked list
 * @head: pointer to a pointer to a linked list
 * @n: pointer to value
 *
 * Return: pointer to new element
 */
size_t check_node(const listptr_t **head, const listptr_t *n)
{
	listprt_t *new;

	new = malloc(sizeof(listptr_t));
	if (new == NULL)
	{
		free_node(*head);
		exit(98);
	}
	new->store = &n;
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * free_node - free dynamic memory
 * @head: pointer to a pointer to a linked list
 *
 * Return: void
 */
void free_node(const listptr_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

/**
 * print_listint_safe - prints a linked list containing loops
 * @head: pointer to listint_t linked list
 *
 * Return: number of elements
 */
size_t print_listint_safe(const listint_t *head)
{
	listptr_t *temp, *new;
	size_t count;

	new = NULL;
	count = 0;
	while (head)
	{
		temp = new;
		while (temp)
		{
			if (temp->store == head)
			{
				printf("-> [%p] %d", &head, head->n);
				free_node(temp);
				return (count);
			}
			temp = temp->next;
		}
		printf("[%p] %d", &head, head->n);
		check_node(new, head);
		head = head->next;
		count++;
	}
	free_node(new);
	return (count);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *head2;
	listint_t *node;

	head2 = NULL;
	add_nodeint(&head2, 0);
	add_nodeint(&head2, 1);
	add_nodeint(&head2, 2);
	add_nodeint(&head2, 3);
	add_nodeint(&head2, 4);
	add_nodeint(&head2, 98);
	add_nodeint(&head2, 402);
	add_nodeint(&head2, 1024);
	print_listint_safe(head2);
	head = NULL;
	node = add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	node->next = add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	print_listint_safe(head);
	return (0);
}
