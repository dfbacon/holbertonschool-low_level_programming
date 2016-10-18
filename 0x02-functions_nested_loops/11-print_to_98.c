#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - print from n to 98
 * @n: int to evaluate
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (i = n; i < 99; i++)
		{
			if (i == 98)
			{
				printf('\n');
			}
			printf("%d, ", i);
		}

	}
	else if (n >= 98)
	{
		for (i =n; i > 97; i--)
		{
			if (i == 98)
			{
				printf('\n');
			}
			printf("%d, ", i);
		}
	}
}
