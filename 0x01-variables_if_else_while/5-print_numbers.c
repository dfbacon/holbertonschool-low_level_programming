#include <stdio.h>

/**
 * main - print decimal numbers from 0 to 9
 * Return: 0 to exit
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf('/n');
	return (0);
}
