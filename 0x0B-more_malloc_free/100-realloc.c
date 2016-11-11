#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to previously called memory (from malloc(old_size))
 * @old_size: size in bytes of memory for ptr
 * @new_size: size in bytes of new memory block
 *
 * Return: pointer to new memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *ptrcopy;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return(ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (ptr == NULL)
		return (new_ptr);
	ptrcopy = ptr;
	i = 0;
	while (i < old_size && i < new_size)
	{
		new_ptr[i] = ptrcopy[i];
		i++;
	}
	free(ptr);
	return (new_ptr);
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
	char *p;
	int i;

	p = malloc(sizeof(char) * 10);
	p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
	i = 0;
	while (i < 98)
	{
		p[i++] = 98;
	}
	simple_print_buffer(p, 98);
	free(p);
	return (0);
}
