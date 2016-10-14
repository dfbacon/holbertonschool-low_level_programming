#include <stdio.h>

/**
 * main - print uniqe combos of two double digits
 * Return: 0
 */

int main(void)
{
	int i, n, f, s, t, l;

	i = 0;
	while (i < 100) /*first number pair*/
	{
		f = i / 10; /*1st digit*/
		s = i % 10; /*2nd digit*/
		n = 0;
		while (n < 100) /*second number pair*/
		{
			t = n / 10;
			l = n % 10;
			if (i < n && i != n)
			{
				putchar(f + '0');
				putchar(s + '0');
				putchar(' ');
				putchar(t + '0');
				putchar(l + '0');
				if (i == 98 && n == 99) /* no comma clause*/
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
