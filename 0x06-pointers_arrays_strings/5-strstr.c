#include <stdio.h>
#include "holberton.h"

/**
 * _strstr - finds the first occurence of a substring
 * @haystack: target string
 * @needle: substring
 * Description: find the "needle" in the "haystack"
 * Return: pointer to the beginning of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	/* pointer to pointer */
	char *str;
	char *target;

	while (*haystack != '\0')
	{
		str = haystack;
		target = needle;
		while (*haystack != '\0')
		{
			str = haystack;
			target = needle;
			while (*target == *haystack && *haystack != 0
			       && *target != 0)
			{
				haystack++;
				target++;
			}
			if (*target == 0)
				return (str);
			haystack = str + 1;
		}
	}
	return (0);
}

int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
