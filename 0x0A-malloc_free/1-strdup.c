#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - copy a string
 * @str: string
 *
 * Return: pointer to copy
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, n;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	s = malloc(i * sizeof(char));
	n = 0;
	while (n < i)
	{
		s[n] = str[n];
		n++;
	}
	return (s);
}
