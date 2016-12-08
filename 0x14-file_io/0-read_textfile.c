#include "holberton.h"

/**
 * read_textfile - reads a text file and print it to the POSIX standard output
 * @filename: filename
 * @letters: number of letters to read and print
 *
 * Return: number of letters it can read and print, or O otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rfd;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rfd = read(fd, buf, letters);
	if (rfd == -1)
		return (0);
	else
		printf("%s", buf);
	close(fd);
	free(buf);
	return (rfd);
}