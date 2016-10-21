#include "holberton.h"

/**
 * print_diagonal - print the \ character n number of times
 * @n: number of \ signs printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, c;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (c = 0; c < i; c++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
