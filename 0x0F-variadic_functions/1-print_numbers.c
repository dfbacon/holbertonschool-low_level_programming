#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers with trailing new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	i = 0;
	while (i < n)
	{
		if ((i < (n -1)) && separator != NULL)
			printf("%d%s", va_arg(numbers, int), separator);
		else
			printf("%d\n", va_arg(numbers, int);
		i++;
	}
	va_end(numbers);
}
