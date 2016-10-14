#include <stdio.h>

/**
 * main - print unique 3 digit combos
 * Return: 0 to exit
 */

int main(void);
{
	int i;
	int n;
	int x;

	i = 0;
	n = i + 1;
	x = n + 1;

	while (i < 10)
	{
		n = i + 1;
		while (n < 10)
		{
			x = n + 1;
			while (x < 10)
			{
				putchar(i + '0');
				putchar(n + '0');
				putchar(x + '0');
				if (i + n + x != 24)
				{
					printchar(',');
					printchar(' ');
				}
				x++;
			}
			n++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
