#include "holberton.h"

/**
 * _islower - check for lowercase character
 * Return: 1 or 0
 */

int _islower(int c)
{
	int x, lower;

	lower = 0;
	for (x = 'a'; x <= 'z'; x++)
	{
	        if (x == c)
			lower = 1;
	}
	return (lower);
}
