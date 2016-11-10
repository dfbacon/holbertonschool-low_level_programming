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
	int i, n, t, l;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	l = 0;
	while (i < ac)
	{
		n = 0;
		while (av[i][n])
		{
			l++;
			n++;
		}
		l++;
		i++;
	}
	l++;
	str = malloc(ac * sizeof(*str));
	if (str == NULL)
		return (NULL);
	i = 0;
	t = 0;
	while (i < ac)
	{
		n = 0;
		while (av[i][n])
		{
			str[t] = av[i][n];
			t++;
			n++;
		}
		str[t] = '\n';
		t++;
		i++;
	}
	return (str);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
