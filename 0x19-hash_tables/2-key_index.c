#include "hash_tables.h"

/**
 * key_index - retrieves the index of a key
 *
 * @key: the key being indexed
 * @size: size of the array of the hash table
 * Return: the index where the key/value pair is stored in the array of the
 * hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	if (size != 0)
		return (index % size);
	return (0);
}
