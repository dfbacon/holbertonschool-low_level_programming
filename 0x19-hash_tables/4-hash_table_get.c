#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 *
 * @ht: hash table containing @key
 * @key: key to look for to find associated value
 * Return: the value associated with @key, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;
	int i;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = hash_djb2((const unsigned char *)key);
	index = index % ht->size;
	temp = ht->array[index];
	if (temp == NULL)
		return (NULL);

	while (temp)
	{
		i = strcmp(temp->key, key);
		if (i == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
