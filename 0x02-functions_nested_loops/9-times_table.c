#include <stdio.h>
#include "holberton.h"

/**
 * times_table - print multiplication table for 0 to 9
 *
 * Return: nothing
 */

void times_table(void)
{
	int r, c;
	int x, y;
	int m;


	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			m = r * c;
			if (m > 9)
			{
				x = m % 10;
				y = m / 10;
				_putchar(' ');
				_putchar(x + '0');
				_putchar(y + '0');
			}
			else
			{
				if (c != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			if (c != 9)
			{
				_putchar(',');
			}
			if (c == 9)
			{
				_putchar('/n');
			}
		}
		c = 0;
	}
}
