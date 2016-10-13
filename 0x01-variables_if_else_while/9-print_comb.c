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
		if (i == 9)
		{
			putchar(i + '0');
			i++;
		}
		putchar(i + '0');
		putchar(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
