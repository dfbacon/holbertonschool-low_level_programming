#include "holberton.h"

/**
 * more_numbers - print some numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int count, i, x, y;

	for (count = 0; count < 11; count++)
	{
		for(i = 0; i < 15; i++)
		{
			x = i / 10;
			y = i % 10;
			if (i > 10)
				_putchar(x + '0');
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
