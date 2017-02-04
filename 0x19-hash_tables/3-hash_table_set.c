#include "hash_tables.h"

/**
 * hash_table_helper - assign key/value pair to node
 *
 * @key: key name
 * @value: value for @key
 * Return: new node if success, NULL if fail
 */
hash_node_t *hash_table_helper(const char key, const char *value)
{
	hash_node_t *new_node;
	char *temp_key, *temp_val;

	temp_key = strdup(key);
	if (temp_key == NULL)
	{
		free(temp_key);
		return (NULL);
	}

	temp_val = strdup(value);
	if (temp_val == NULL)
		return (0);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		free(temp_key);
		free(temp_val);
		return (NULL);
	}

	new_node->key = temp_key;
	new_node->value = temp_val;
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: the key
 * @value: value paired with @key
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *walk;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new = hash_table_helper(key, value);
	walk = ht->array[index];
	return (1);
}
