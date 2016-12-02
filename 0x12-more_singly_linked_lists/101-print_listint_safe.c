#include <stdio.h>
#include "lists.h"

/**
 * check_node - check for unique nodes, and add to listint_t linked list
 * @head: pointer to a pointer to a linked list
 * @n: pointer to value
 *
 * Return: pointer to new element
 */
size_t check_node(const listint_t **head, const listint_t *n)
{
}

/**
 * free_node - free dynamic memory
 * @head: pointer to a pointer to a linked list
 *
 * Return: void
 */
void free_node(const listint_t **head)
{
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to listint_t linked list
 *
 * Return: number of elements
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *new, *temp;
	size_t count;

	new = NULL;
	count = 0;
	while (head)
	{
		temp = head;
		while ()
	}

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
