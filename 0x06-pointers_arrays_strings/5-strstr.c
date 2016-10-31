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
	int i, j;
	char *found;

	/* define the needle */
	for (j = 0; needle[j] != '\0'; j++)
	{
		/* find the needle */
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (needle[j] == haystack[i])
			{
				found = &haystack[i];
				return (found);
			}
		}
	}
	if (j == '\0')
		found = '\0';
	return (found);
}
