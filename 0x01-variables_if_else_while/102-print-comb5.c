#include <stdio.h>

/**
 * main - print uniqe combos of two double digits
 * Return: 0
 */

int main(void)
{
	int i = 0, n = 0;
	int f, s, t, l;

	while (i < 100)
	{
		f = i / 10;
		s = i % 10;
		while (n < 100)
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
				if (i == 98 && n == 99)
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