#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - find length of string
 * @s: pointer to  string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (*(s++) != '\0')
		l++;
	return (l);
}

/**
 * multiply - multiply two numbers
 * @s1: first string
 * @s2: second string
 *
 * Return: product
 */
char *multiply(char *s1, char *s2)
{
	int i_1, i_2, sum;

	if (argc == 3)
	{
		i_1 = atoi(argv[1]);
		i_2 = atoi(argv[2]);
		sum = i_1 * i_2;
		printf("%d\n", sum);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}

/**
 * main - multiply two positive numbers
 * @argc: number of arguments
 * @argv: pointer to strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *n1, *n2, *mul;

	if (argc != 3)
	{
		printf("Error");
		exit(98);
	}
/* check if n1 and n2 are only digits */
	n1 = ;
	n2 = ;
	if (n1 == NULL || n2 == NULL)
	{
		printf("Error");
		exit(98);
	}
/* if both n1 or n2 are \0 */
	if (*n1 == '\0' || *n2 == '\0')
	{
		printf("0\n");
		return (0);
	}
	else
	{
/* do math */
		mul = multiply(n1, n2);
		if (mul == NULL)
		{
			printf("Error");
			return (0);
		}
	}
/* print statement if everything working */
	free(mul);
	return (0);
}
