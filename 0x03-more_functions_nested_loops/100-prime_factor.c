#include <stdio.h>

/**
 * main - print largest prime factor of a number
 *
 * Return: 0
 */

int main(void)
{
	long d, n;

	n = 612852475143;
	d = 2;
	while (d < n)
	{
		if ((n % d) ==0)
		{
			n = n / d;
			d--;
		}
		d++;
	}
	printf("%ld\n", n);
	return (0);
}
