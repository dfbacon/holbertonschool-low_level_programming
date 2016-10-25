#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int i:

	i = 0;
	while (*(s++) != '\0')
		i++;
	return (i);
}
