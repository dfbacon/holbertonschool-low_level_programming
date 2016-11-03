#include "holberton.h"

/**
 * is_prime_number - calculate whether a number is prime or not
 * @n: number
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (calc(n, 2));
}

/**
 * calc - determine if prime
 * @n: number
 * @i: divisor
 *
 * Return: 1 if prime, 0 if not
 */
int calc(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
			return (0);
		if (n % i != 0)
			return (calc(n, i + 1));
	}
	return (1);
}
