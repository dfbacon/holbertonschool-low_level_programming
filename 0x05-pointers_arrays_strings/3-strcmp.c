#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: -1, 1, or 0
 */

int _strcmp(char *s1, char *s2)
{
	int sl1, sl2;

	sl1 = sl2 = 0;
	while (s1[sl1] != '\0')
		sl1++;
	while (s2[sl2] != '\0')
		sl2++;
	if (sl1 < sl2)
		return (-1);
	else if (sl1 > sl2)
		return (1);
	else
		return (0);
}
