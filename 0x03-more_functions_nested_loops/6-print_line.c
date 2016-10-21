#include "holberton.h"

/**
 * print_line - print line n spaces long
 * @n: length of the line
 *
 * Return: length of line
 */

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
