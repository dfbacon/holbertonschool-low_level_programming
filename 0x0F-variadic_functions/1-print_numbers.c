#include <stdio.h>
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
	int value;

	va_start(numbers, n);
	i = 0;
	while (i < n)
	{
		value = va_arg(numbers, int);
		if ((i < (n -1)) && separator != NULL)
			printf("%d%s", value, separator);
		else
			printf("%d\n", value;
		i++;
	}
	va_end(numbers);
}
