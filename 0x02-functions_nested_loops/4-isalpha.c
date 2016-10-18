#include <stdio.h>
#include "holberton.h"

/**
 *_isalpha - checks for an alphabetic character
 * @c: the character in question
 *Return: 1 if c is a letter; 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
