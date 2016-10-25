#include "holberton.h"

/**
 * print_rev - print a string in reverse with trailing new line
 * @s: pointer to string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
		i++;
	i = -1;
	while (i > 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
