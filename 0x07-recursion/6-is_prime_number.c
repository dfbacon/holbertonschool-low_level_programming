#include <stdio.h>
#include "holberton.h"

/**
 * is_prime_number - calculate whether a number is prime or not
 * @n: number
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (calc(n, 1));
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
	if (i > 1 && i < n)
	{
		if (n % i == 0)
			return (0);
		else if (n % i != 0)
			return (calc(n, i + 1));
	}
	return (1);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = is_prime_number(1);
	printf("%d\n", r);
	r = is_prime_number(1024);
	printf("%d\n", r);
	r = is_prime_number(16);
	printf("%d\n", r);
	r = is_prime_number(17);
	printf("%d\n", r);
	r = is_prime_number(25);
	printf("%d\n", r);
	r = is_prime_number(-1);
	printf("%d\n", r);
	r = is_prime_number(113);
	printf("%d\n", r);
	r = is_prime_number(7919);
	printf("%d\n", r);
	return (0);
}
