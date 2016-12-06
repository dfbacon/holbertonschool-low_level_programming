#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number being examined
 * @index: index
 *
 * Return: 1 if success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long) * 8)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
