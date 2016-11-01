#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - print the diagonal numbers of a matrix
 * @a: array
 * @size: array size
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, init_value, sum, total;

	i = 0;
	init_value = 0;
	sum = total = 0;
	while (i < (size * size))
	{
		init_value = a[i];
		sum = sum + init_value;
		i = i + size + 1;
	}
	i = size - 1;
	while (i < ((size * size) - 1))
	{
		init_value = a[i];
		total = total + init_value;
		i = i + (size - 1);
	}
	printf("%d, %d\n", sum, total);
}

int main(void)
{
	int c3[3][3] = {
		{0, 1, 5},
		{10, 11, 12},
		{1000, 101, 102},
	};
	int c5[5][5] = {
		{0, 1, 5, 12124, 1234},
		{10, 11, 12, 123521, 12512},
		{1000, 101, 102, 12545, 214543435},
		{100, 1012451, 11102, 12545, 214543435},
		{10, 12401, 10452, 11542545, 1214543435},
	};
	print_diagsums((int *)c3, 3);
	print_diagsums((int *)c5, 5);
	return (0);
}
