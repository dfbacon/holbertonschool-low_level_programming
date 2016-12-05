#include "holberton.h"
#include <stdio.h>

/**
 * get_bit - find the value of a bit at a given index
 * @n: number being examined
 * @index: index
 *
 * Return: value of bit at @index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	/* check if index is greater than # of bites */
        /* mulitply sizeof by 8 for bits/byte */
	if (index > sizeof(long) * 8)
		return (-1);

	/* set i to n[index], i.e. move index # of bits to the right in n */
	i = n >> index & 1;
	return (i);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 1);
	printf("%d\n", n);
	n = get_bit(1024, 0);
	printf("%d\n", n);
	return (0);
}
