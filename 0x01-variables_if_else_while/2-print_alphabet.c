#include <stdio.h>

/**
 * main - print alphabet on single line
 * Return: 0 to exit
 */

int main(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
