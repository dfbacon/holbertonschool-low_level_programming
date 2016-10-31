#include "holberton.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: string being evaluated
 * @accept: acceptable number of bytes
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (accept[i] != '\0')
		i++;
	while (j < i)
	{
		if (s[j] != '\0')
			j++;
	}
	return (j);
}
