#include <stdio.h>
#include "holberton.h"

/**
 * _sqrt_recursion - calculate the square root of a number
 * @n: number
 *
 * Return: int value
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		n = -n;
	return (calc(n, 1));
}

/**
 * calc - find sqrt
 * @n: number
 * @i: incrementor
 * Return: -1;
 */

int calc(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (calc(n, i + 1));
	else
		return (-1);
}

int main(void)
{
	int r;

	r = _sqrt_recursion(1);
	printf("%d\n", r);
	r = _sqrt_recursion(1024);
	printf("%d\n", r);
	r = _sqrt_recursion(16);
	printf("%d\n", r);
	r = _sqrt_recursion(17);
	printf("%d\n", r);
	r = _sqrt_recursion(25);
	printf("%d\n", r);
	r = _sqrt_recursion(-1);
	printf("%d\n", r);
	return (0);
}
