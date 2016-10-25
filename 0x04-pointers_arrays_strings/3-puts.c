#include "holberton.h"

/**
 * _puts - print string with trailing newline to stdout
 * @str: pointer to string
 *
 * Return: void
 */

void _puts(char *str)
{
	char s;

	while ((s = *str) != '\0')
        {
		_putchar(s);
		*str++;
        }
	_putchar('\n');
}
