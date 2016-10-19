#include <stdio.h>
#include "holberton.h"

/**
 * main - print sum of even fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long i, n, f, sum;

	i = 0;
	n = 1;
	while((f = i + n) < 4000000)
	{
		if (f % 2 == 0)
			sum += f;
		i = n;
		n = sum;
	}
	printf("%ld\n", sum);
	return (0);
}
