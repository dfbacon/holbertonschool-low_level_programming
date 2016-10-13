#include <stdio.h>

/**
 * main - print 0-8 and a-f
 * Return: 0 to exit
 */

int main(void)
{
	char n;
	char l;

	n = '0';
	while (n < '9')
	{
		putchar(n);
		n++;
	}
	l = 'a';
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
