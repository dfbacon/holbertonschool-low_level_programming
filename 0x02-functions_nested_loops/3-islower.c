#include "holberton.h"

/**
 * _islower - check for lowercase character
 * Return: 1 if condition met, 0 if not
 */

int _islower(int c)
{
	int x;
	int lower;

	lower = 0;
	for (x = 'a'; x <= 'z'; x++)
	{
	        if (x == c)
			lower = 1;
	}
	return (lower);
}
