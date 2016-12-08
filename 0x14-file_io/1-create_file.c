#include "holberton.h"

/**
 * _strlen - find length of string
 * @s: pointer to  string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int l;

	if (s == NULL)
		return (0);
	l = 0;
	while (*(s++) != '\0')
		l++;
	return (l);
}

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success, -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, wfd;
	char *buf;

	if (filename == NULL)
		return (-1);
	len = _strlen(text_content);
	buf = malloc(sizeof(char) * len);
	if (buf == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		free(buf);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		free(buf);
		return (1);
	}
	if (len > 0)
		wfd = write(fd, text_content, len);
	if (wfd == -1)
	{
		close(fd);
		free(buf);
		return (-1);
	}
	close(fd);
	free(buf);
	return (1);
}
