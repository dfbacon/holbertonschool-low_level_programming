#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be examined
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, j, k;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* assuming int = 32 bits (int = 4 bytes * (8 bits/byte) */
	/* use 31 b/c n is at least one bit */
	i = 31;
	while (i >= 0)
	{
		/* right shift by i bytes, filling w/ 0's */
		j = n >> i;
		/* do not want to print until first '1' */
		if (j & 1)
		{
			k = i;
			break;
		}
		else
		{
			i--;
			k = i;
		}
	}
	/* preceeding 0's not printed, print all bits from this point */
	while (k >= 0)
	{
		j = n >> k;
		if (j & 1)
			_putchar('1');
		else
			_putchar('0');
		k--;
	}
}
