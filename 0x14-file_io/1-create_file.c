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
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success, -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	char *buf;

	len = _strlen(text_content);
	if (text_content == NULL)
		text_content = "";
	buf = malloc(sizeof(char) * len);
	if (buf == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd == -1)
	{
		free(buf);
		return (-1);
	}
	else
		write(fd, text_content, len);
	close(fd);
	free(buf);
	return (1);
}
