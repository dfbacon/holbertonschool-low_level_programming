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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else
			s++;
	}
	if (*s == '\0')
		return ('\n');
}
