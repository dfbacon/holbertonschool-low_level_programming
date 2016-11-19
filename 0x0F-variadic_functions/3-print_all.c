#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print char
 * @list: char location
 * @separator: separator between strings
 *
 * Return: void
 */
void print_char(va_list list, char *separator)
{
	printf("%s%c", separator, va_arg(list, int));
}

/**
 * print_int - print int
 * @list: int location
 * @separator: separator between strings
 *
 * Return: void
 */
void print_int(va_list list, char *separator)
{
	printf("%s%d", separator, va_arg(list, int));
}

/**
 * print_float - print float
 * @list: float location
 * @separator: separator between strings
 *
 * Return: void
 */
void print_float(va_list list, char *separator)
{
	printf("%s%f", separator, va_arg(list, double));
}

/**
 * print_string - print string
 * @list: string location
 * @separator: separator between strings
 *
 * Return: void
 */
void print_string(va_list list, char *separator)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 * print_all - print anything
 * @format: list of types of args passed to function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *separator;
	int i, j;
	print_format_t print_format[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(list, format);
	separator = "";

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*print_format[j].c == format[i])
			{
				print_format[j].f(list, separator);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
