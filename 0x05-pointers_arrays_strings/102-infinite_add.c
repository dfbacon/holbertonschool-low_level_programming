#include "holberton.h"
#include <stdio.h>

/**
 * infinite_add - add two strings
 * @n1: string 1
 * @n2: string 2
 * @r: added string
 * @size_r: buffer of string
 *
 * Return: character
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;

	i = j  0;
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
