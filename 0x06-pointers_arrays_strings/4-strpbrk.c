#include "holberton.h"

/**
 * _strpbrk - locates the first occurence of a test string in a target string
 * @s: test string
 * @accept: target string
 *
 * Return: char pointer to byte(s) mactching in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *target;

	/* iterate through s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* iterate through accept for each char in s */
		j = 0;
		while (accept[j] != '\0')
		{
			/* if a match is found */
			if (accept[j] == s[i])
			{
				target = &s[i];
				return (target);
			}
			j++;
		}
	}
	/* else return NULL */
	if (i == '\0')
		target = '\0';
	return (target);
}
