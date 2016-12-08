#include "holberton.h"
#include <stdio.h> /* remove me */

/**
 * _strlen - find length of string
 * @s: pointer to  string
 *
 * Return: length of s
 */
unsigned int _strlen(const char *s)
{
	int l;

	l = 0;
	while (*(s++) != '\0')
		l++;
	return (l);
}

/**
 * read_textfile - reads a text file and print it to the POSIX standard output
 * @filename: filename
 * @letters: number of letters to read and print
 *
 * Return: number of letters it can read and print, or O otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	unsigned int buf_size;
	char buf[1024];

	if (filename == NULL)
		return (0);
	if (letters > 1024)
		return (0);
	/* find length of buffer */
        buf_size = _strlen(filename);
	/* if letters > buf_size then set buf_size = letters */
	if (letters >= buf_size)
		buf_size = letters;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read(fd, buf, letters);
	buf[buf_size + 1] = '\0';
	printf("%s\n", buf);
	close(fd);
	return (buf_size);
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
