#include "holberton.h"

/**
 * _islower - check for lowercase character
 * @c: the character in question
 * Return: int
 */

int _islower(int c)
{
	if (c >= 'a' && c <== 'z')
		return (1);
	else
		return (0);
}
