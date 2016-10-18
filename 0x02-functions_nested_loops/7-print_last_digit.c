#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - prints last digit of number
 * @n: number being examined
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	n = n % 10;
	return (n);
}
