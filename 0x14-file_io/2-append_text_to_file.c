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
	int fd, len;
	char *buf;

	len = _strlen(text_content);
	buf = malloc(sizeof(char) * len);
	if (buf == NULL)
		return (-1);

	fd = open(filename, O_APPEND);
	if (fd == -1)
	{
		free(buf);
		return (-1);
	}
	write(fd, text_content, len);
	close(fd);
	free(buf);
	return (1);
}
