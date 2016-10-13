#include<stdio.h>

/**
 * main - print single-digit combos w/ commas
 * Return: 0 to exit
 */

int main(void)
{
	int i;

	i = 0;
	while(i < 10)
	{
		putchar(i + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
