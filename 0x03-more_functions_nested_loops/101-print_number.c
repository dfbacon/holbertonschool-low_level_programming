#include "holberton.h"

/**
 * print_number - ptint an integer
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	int i;

	i = 1000000000;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else if (n == 0)
	{
		_putchar('0');
	}

	while (i > 0)
	{
		if (n >= i)
		{
			if (i >= 10)
			{
				_putchar((n / i) % 10 + '0');
			}
			else
			{
				_putchar(n % 10 + '0');
				n = 0;
			}
		}
		if (i > 1)
			i = i / 10;
		else
			i = 0;
	}
}
