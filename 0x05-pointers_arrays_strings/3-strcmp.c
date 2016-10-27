#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int s1_len, s2_len;

	s1_len = 0;
	while (s1[s1_len] != '\0')
		s1_len++;
	s2_len = 0;
	while (s2[s2_len] != '\0')
		s2_len++;
	if (s1_len > s2_len)
		return (1);
	else if (s1_len < s2_len)
		return (-1);
	else
		return (0);
}
