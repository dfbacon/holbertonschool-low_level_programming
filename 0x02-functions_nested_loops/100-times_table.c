#include "holberton.h"

/**
 * print_times_table - prints n times table
 * @n: argument used to define size of multiplcation table
 * Return: void
 */

void print_times_table(int n)
{
	int x, y;

	if (!(n < 0 || n > 15))
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				if (y == 0)
				{
					_putchar(y * x + '0');
				}
				else if ((y * x) < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(x * y + '0');
				}
				else if ((x * y) < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((x * y) / 10 + '0');
					_putchar((x * y) % 10 + '0');
				}
				else if ((x * y) > 99)
				{
					_putchar(' ');
					_putchar((x * y) / 100 + '0');
					_putchar(((x * y) / 10) % 10 + '0');
					_putchar((x * y) % 10 + '0');
				}
				if (y != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
