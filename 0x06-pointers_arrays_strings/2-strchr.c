#include <stdio.h>
#include "holberton.h"

/**
 * _strchr - find the first occurence of a character in a string, or NULL
 * @s: string being examined
 * @c: character
 *
 * Return: char pointer
 */

char *_strchr(char *s, char c)
{
	int i;
	char *first;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			first = &s[i];
			return (first);
		}
		else if ((s[i] + 1) == c)
		{
			first = &s[i] + 1;
			return (first);
		}
		i++;
	}
	if (s[i] == '\0')
		first = '\0';
	return (first);
}

int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');
	printf("%s\n", f);
	return (0);
}
