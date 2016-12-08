#include "holberton.h"
#include <stdio.h> /* remove me */

/**
 * read_textfile - reads a text file and print it to the POSIX standard output
 * @filename: filename
 * @letters: number of letters to read and print
 *
 * Return: number of letters it can read and print, or O otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (NULL);

}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(1);
	}
	n = read_textfile(av[1], 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);
	return (0);
}
