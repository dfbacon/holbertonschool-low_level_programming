#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - prints a to z 10 times
 *
 * Return: 0;
 */

void print_alphabet_x10(void)
{
	int i, c;

	i = 0;
	while (i <= 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
