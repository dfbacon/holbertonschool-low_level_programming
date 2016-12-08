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

	l = 0;
	while (*(s++) != '\0')
		l++;
	return (l);
}

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file
 * @text_content: string to append to file
 *
 * Return: 1 if success, -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, wfd;
	char *buf;

	if (filename == NULL)
		return (-1);
	len = _strlen(text_content);
	buf = malloc(sizeof(char) * len);
	if (buf == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
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
	wfd = write(fd, text_content, len);
	if (wfd == -1)
	{
		free(buf);
		return (-1);
	}
	close(fd);
	free(buf);
	return (1);
}
