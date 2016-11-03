#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * is_palindrome - check if a word is a palindrome
 * @s: pointer to word (char)
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	static char *p;

	p = s;
	if (
	if (*s != '\0')
	{
		if (*s != *p)
			return (0);
		if (*s == *p)
		{
			p--;
			return (is_palindrome(s++));
		}
		return (1);
	}
	else if (*s == '\0')
		return (1);
	else
		return (0);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = is_palindrome("level");
	printf("%d\n", r);
	r = is_palindrome("redder");
	printf("%d\n", r);
	r = is_palindrome("holberton");
	printf("%d\n", r);
	r = is_palindrome("step on no pets");
	printf("%d\n", r);
	return (0);
}
