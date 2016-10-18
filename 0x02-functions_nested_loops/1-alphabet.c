#include <stdio.h>
#include "holberton.h"

/**
 * main-print alphabet
 *
 * Return: 0
 */

int main(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
	return (0);
}
