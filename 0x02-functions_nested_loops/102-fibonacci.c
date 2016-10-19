#include <stdio.h>
#include "holberton.h"

/**
 * main - print first 50 numbers in fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	long int i;
	long int n;

	n = 0;
	for (i = 1; i < 51; i++)
	{
		printf("%ld", (n = n + i));
		if (i == 50)
			putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
