#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: integer
 */

int _strlength(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; i < *(s + i); i++)
		len++;
	return (len);
}

int main(void)
{
	char *str;
	int len;

	str = "Holberton!";
	len = _strlength(str);
	printf("%d\n", len);
	return (0);
}
