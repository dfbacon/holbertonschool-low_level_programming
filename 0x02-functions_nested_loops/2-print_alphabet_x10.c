#include "holberton.h"

/**
 * print_alphabet_x10 - prints thru z
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a;
	int i;



	for (i = 0; i < 10; i++)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}

}
