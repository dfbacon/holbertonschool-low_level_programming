#include <stdio.h>
#include "holberton.h"

/**
 * print_times_table - print times table for n
 * @n: number to be checked
 *
 * Return: void
 */

void print_times_table(int n)
{
	int x;
	int y;

	if (n >= 0 || n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for(y = 0; y <= n; y++)
			{
				if (y == 0)
				{
					_putchar(y * x + '0')
				}
				else if ((y * x) < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(x * y + '0')
				}
				else if ((y * x) < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((y * x) / 10 + '0');
					_putchar((y * x) % 10 + '0');
				}
				else if ((x * y) > 99)
				{
					_putchar(' ');
					_putchar((x * y) / 100 + '0');
					_putchar(((x * y) / 10) % 10 + '0');
					_putchar((x * y) % 10 + '0';
				}
				if (y != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
