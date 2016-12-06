#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to number being examined
 * @index: index
 *
 * Return: 1 if correct, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* check if index is greater than # of bytes */
	if (index > sizeof(long) * 8)
		return (-1);

	/* set n to 1 */
	*n = *n | (1 << index);
	return (1);
}
