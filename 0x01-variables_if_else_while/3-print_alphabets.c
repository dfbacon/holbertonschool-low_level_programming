#include <stdio.h>

/**
 * main - print lower- then upper-case alphabet
 * Return: 0 to exit
 */

int main(void)
{
	char l;
	char L;

	l = 'a'
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	L = 'A'
	while (L <= 'L')
	{
		putchar(L);
		L++;
	}
	putchar('\n');
	return (0);
}
