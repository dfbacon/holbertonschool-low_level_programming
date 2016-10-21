#include "holberton.h"

/**
 * _isdigit - determine whether c is a digit
 * @c: character in question
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (!((c >= 'a') && (c <= 'z')))
		return (1);
	else
		return (0);
}
