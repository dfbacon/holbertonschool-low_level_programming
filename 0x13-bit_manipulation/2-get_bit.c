#include "holberton.h"
#include <stdio.h> /* remove me */

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be examined
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, j, k;
	unsigned long int *binary;

	binary = malloc(n * sizeof(int));
	if (binary == NULL)
		return (-1);
	if (n == 0)
	{
		putchar('0');
		return;
	}
	i = 31;
	while (i >= 0)
	{
		j = n >> i;
		if (j & 1)
		{
			k = i;
			break;
		}
		else
		{
			i--;
			k = i;
		}
	}
	while (k >= 0)
	{
		j = n >> k;
		if (j & 1)
			*binary = 1;
		else
			*binary = 0;
		binary++;
		k--;
	}
	return (*binary);
}

/**
 * get_bit - find the value of a bit at a given index
 * @n: number being examined
 * @index: index
 *
 * Return: value of bit at @index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	n = print_binary(n);
	if (n == -1)
		return (-1);


}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 1);
	printf("%d\n", n);
	n = get_bit(1024, 0);
	printf("%d\n", n);
	return (0);
}
