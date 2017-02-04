#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 *
 * @ht: hash table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *temp;

	if (ht == NULL)
		return;

	temp = ht;
	while (temp)
	{
		temp = ht;
		ht = ht->next;
		free(temp->array);
		free(temp);
	}
}
