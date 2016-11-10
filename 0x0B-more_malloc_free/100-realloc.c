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
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
/* going to need malloc(old_size) */
/* newly allocated range will be in range from start of ptr to min of old and new sizes */
/* if new_size > old_size, added mem should NOT be initialized */
/* if new_size == old_size, do NOTHING, return (ptr) */
/* if ptr == NULL, call == malloc(new_size) for all values of old and new */
/* if new_size == 0, and ptr != NULL, call == free(ptr), return (NULL) */
	return (ptr);
}
