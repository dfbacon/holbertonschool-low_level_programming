#include <stdio.h>
#include "holberton.h"

/**
 * _sqrt_recursion - calculate the square root of a number
 * @n: number
 *
 * Return: int value or -1 if not natural
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		n = -n;
	return (calculator(n, 1));
}

/**
 * calculator - find square root if available
 * @n: number
 * @g: guess number to begin checking n
 *
 * Return: int g or -1
 */
int calculator(int n, int g)
{
	if (n == (g * g))
		return (g);
	else if (n > (g * g))
		return (calculator(n, g + 1));
	else
		return (-1);
}
