#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print whether random variable n is pos. or neg.
 * Return: 0 to exit
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}
