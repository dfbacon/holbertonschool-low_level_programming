#include "holberton.h"

/**
 * _islower - check for lowercase character
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	int l, ret;

	ret = 0;
	for (l = 'a'; l <= 'z'; l++)
	{
	        if (l == c)
			ret = 1;
	}
	return (ret);
}
