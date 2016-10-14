#include <stdio.h>
/**
 * main - all unique combos of two dbl digits
 * Return: 0
 */

int main(void)
{
	int i, n;
	int f, s, t, l;

	for (i = 0; i < 100; i++)
	{
		f = i / 10;
		s = i % 10;
		for (j = 0; j < 100; j++)
		{
			t = n / 10;
			l = n % 10;
			if (i != n && i < n)
			{
				putchar(f + '0');
				putchar(s + '0');
				putchar(' ');
				putchar(t + '0');
				putchar(l + '0');
				if (i != 98 || n != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
