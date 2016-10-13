#include<stdio.h>

/**
 * main - print single-digit combos w/ commas
 * Return: 0 to exit
 */

int main(void)
{
	int i;

	i = 0;
	while(i < 9)
	{
		putchar(i + '0');
		putchar(', ');
		i++;
	}
	while(i == 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
