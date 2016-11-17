#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - computer op of two numbers
 * @argc: number of arguments
 * @argv: value of arguments
 *
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int num1, num2, result;
	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2][0];

	if ((operator != '+' && operator != '-' && operator != '*' &&
	     operator != '/' && operator != '%') ||
	    argv[2] == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = (*get_op_func)(&operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}
