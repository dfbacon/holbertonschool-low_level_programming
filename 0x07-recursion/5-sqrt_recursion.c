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
		return (-1);
	return (calc(n, 1));
}

/**
 * calc - find square root if available
 * @n: number
 * @i: guess number to begin checking n
 *
 * Return: int i or -1
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
