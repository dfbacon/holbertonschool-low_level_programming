#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to previously called memory (from malloc(old_size))
 * @old_size: size in bytes of memory for ptr
 * @new_size: size in bytes of new memory block
 *
 * Return: pointer to new memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, min;

/* if new_size == 0, and ptr != NULL, call == free(ptr), return (NULL) */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

/* if new_size == old_size, do NOTHING, return (ptr) */
	if (new_size == old_size)
		return(ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

/* if ptr == NULL, call == malloc(new_size) for all values of old and new */
	if (ptr == NULL)
		return (new_ptr);
/* realloc(NULL, n * sizeof(*new_ptr)) == malloc */
/* newly allocated range will be in range from start of ptr to min of old and new sizes */
	return (ptr);
}
