#include <stdio.h>
#include "holberton.h"

/**
 * main - print sum of even fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	enum { MAX_VALUE = 4000000 };
	long i, n, f, sum;

	i = 0;
	n = 1;
	while((f = i + n) < MAX_VALUE)
	{
		if (f % 2 == 0)
			sum += f;
		i = n;
		n = sum;
	}
	printf("%d\n", sum);
	return (0);
}
