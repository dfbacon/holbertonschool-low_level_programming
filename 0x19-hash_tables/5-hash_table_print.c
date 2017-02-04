#include "hash_tables.h"

/**
 * ht_print_helper - helper function to print key/value pairs in hash table
 *
 * @node: node containing key/value pair to print
 * @i: node counter
 * Return: always @i
 */
int ht_print_helper(hash_node_t *node, int i)
{
	if (node == NULL)
		return (i);

	while (node)
	{
		if (i > 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		i++;
		node = node->next;
	}
	return (i);
}

/**
 * hash_table_print - print a hash table
 *
 * @ht: hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int index;
	int i;

	if (ht == NULL)
		return;

	printf("{");
	index = 0;
	i = 0;
	while (index < ht->size)
	{
		head = ht->array[index];
		i = ht_print_helper(head, i);
		index++;
	}
	printf("}\n");
}
