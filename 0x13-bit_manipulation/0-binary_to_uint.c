#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string containing 0s and 1s
 *
 * Return: converted unsigned int, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u, bit_value;

	if (b == NULL)
		return (0);

	while (*b)
	{
		/* looking at the ASCII values of 0 and 1 */
		if (!(*b == 48 || *b == 49))
			return (0);
		b++;
	}
	b--;
	u = 0;
	bit_value = 1;
	while (*b)
	{
		if (*b == 48) /* if *b == 0 */
			u += 0;
		else if (*b == 49) /* if *b == 1 */
			u += (1 * bit_value);
		bit_value *= 2;
		b--;
	}
	return (u);
}
