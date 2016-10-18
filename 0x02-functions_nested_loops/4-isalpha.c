#include <stdio.h>
#include "holberton.h"

/**
 * _isalpha - check if character is in alphabet
 * @c: character in question
 * Return: 0
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
