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
	return (calc(n, 1));
}

/**
 * calc - find sqrt
 * @n: number
 * @guess: guess number to begin checking
 * Return: int guess or -1;
 */
int calc(int n, int guess)
{
	/* if guess is correct */
	if (n == (guess * guess))
		return (guess);

	/* if guess is too low */
	else if (n > (guess * guess))
		return (calc(n, guess + 1));

	/* all other cases */
	else
		return (-1);
}
