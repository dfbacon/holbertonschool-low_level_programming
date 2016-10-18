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
	int p;

	if (x >= 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		p = -x;
		return (p);
	}
}
