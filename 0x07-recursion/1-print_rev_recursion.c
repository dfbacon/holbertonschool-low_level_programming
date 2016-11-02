#include "holberton.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: pointer to string
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	else if (*s == '\0')
	{
		s--;
		while (*s != '\n')
		{
			_putchar(*s);
			s--;
		}
		_putchar('\n');
	}
}
