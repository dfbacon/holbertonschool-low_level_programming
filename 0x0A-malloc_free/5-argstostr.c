#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * argstostr - concatenates all arguments
 * @ac: argument counter
 * @av: pointer to pointer to argument value
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* maybe sizeof(void *) */
	str = malloc(ac * sizeof(char*));
	/* more code here */
	return (str);
}
