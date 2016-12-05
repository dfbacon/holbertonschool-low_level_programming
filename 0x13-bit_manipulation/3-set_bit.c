#include "holberton.h"
#include <stdio.h>

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
	*n = ~(*n >> index);
	return (1);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n;

	n = 1024;
	set_bit(&n, 5);
	printf("%lu\n", n);
	n = 0;
	set_bit(&n, 10);
	printf("%lu\n", n);
	n = 98;
	set_bit(&n, 0);
	printf("%lu\n", n);
	return (0);
}
