#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	if (size < 1)
		return (NULL);

	new_table = malloc(sizeof(*new_table));
	if (new_table == NULL)
		return (NULL);
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}

	new_table->size = size;
	return (new_table);
}
