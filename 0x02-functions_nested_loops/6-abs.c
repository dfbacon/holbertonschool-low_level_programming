#include <stdio.h>
#include "holberton.h"

/**
 * _abs - compute the absolute value
 * @x: integer in question
 *
 * Return: absolute value
 */

in _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		x = x * -1;
		return (x);
	}
}
