#include <stdio.h>
#include "holberton.h"

/**
 * print_times_table - print times table for 0 to 15
 * @n: number to be checked
 *
 * Return: void
 */

void print_times_table(int n)
{
	int x;
	int y;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for(y = 0; y <= n; y++)
			{
				if (y == 0)
				{
					_putchar(y * x + '0')
				}
				else if ((y * x) <= 15)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(x * y + '0')
				}
				else
				{
					_putchar(' ');
					_putchar((x * y) / 10 + '0');
					_putchar((x * y) % 10 + '0');
				}
				if (y != 15)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
	else
		break;
}
