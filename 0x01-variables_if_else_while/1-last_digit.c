#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit
 * Return: 0 to exit
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	{
		printf("Last digit of %d is %x and is greater than 5\n", n, x);
	}
	else if (x == 0)
	{
		printf("Last digit of %d is %x and is 0\n", n, x);
	}
	else
	{
		printf("Last digit of %d is %x and is lass than 6 and not 0\n", n,x);
	}
	return (0);
}
