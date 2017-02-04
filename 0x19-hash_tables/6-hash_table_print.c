#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 *
 * @ht: hash table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL)
		return;

	index = 0;
	while (i < ht->size)
	{
		if (ht->array[index])
		{
			while (temp)
			{
				temp = ht->array[index];
				ht->array[i] = ht->array[i]->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
			i++;
		}
	}
	free(ht->array);
	free(ht);
}
