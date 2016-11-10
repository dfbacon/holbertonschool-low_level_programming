#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - allocate memory for array using malloc
 * @nmemb: number of elements in the array
 * @size: size of bytes of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
/* initialize memory to value of 0 */
	i = 0;
	while (i <= (nmemb * size))
	{
		p[i] = 0;
		i++;
	}
/* maybe set last p[i] value to \0 */
	return (p);
}

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *a;

	a = _calloc(98, sizeof(char));
	strcpy(a, "Holberton");
	strcpy(a + 9, " School! :)\n");
	a[97] = '!';
	simple_print_buffer(a, 98);
	return (0);
}
