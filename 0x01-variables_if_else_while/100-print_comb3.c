#include <stdio.h>

/**
 * main - print unique digit combinations
 * Return: 0 to exit
 */

/*00 to 19*/
int main(void)
{
	int i;
	int n;

	i = 0;
	n = i + 1;

	while (i < 10)
	{
		n = i + 1;
		while (n < 10)
		{
			putchar(i + '0');
			putchar(n + '0');
			if (i + n != 17)
			{
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
