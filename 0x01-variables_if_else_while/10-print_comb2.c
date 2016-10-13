#include <stdio.h>

/**
 * main - print 0 to 99 with commas
 * Return: 0 to exit
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 100)
	{
		if (i < 10)
		{
			putchar('0');
		}
		putchar(i + '0');
		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
