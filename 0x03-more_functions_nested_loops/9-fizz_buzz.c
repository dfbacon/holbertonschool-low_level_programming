#include "holberton.h"
#include <stdio.h>

/**
 * main - print 1 to 100 with FizzBizz qualifiers
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 1)
			printf("1");

		else if (((i % 3) == 0) && ((i % 5) == 0))
			printf(" FizzBuzz");

		else if ((i % 3) == 0)
			printf(" Fizz");

		else if ((i % 5) == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
	}
	printf("\n");
	return (0);
}
