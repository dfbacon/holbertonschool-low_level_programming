#include <stdio.h>
#include "holberton.h"

/**
 * main - print sum of even fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long i, n, sum_total, sum_even, max;

	i = 0;
	n = 1;
	max = 4000000;
	sum_total = 0;
	sum_even = 0;
	while(i < max && n < max)
	{
		if ((n % 2) == 0)
			sum_even += n;
		sum_total = i + n;
		i = n;
		n = sum_total;
	}
	printf("%ld\n", sum_even);
	return (0);
}
