#include "holberton.h"

/**
 * _strlen_recursion - find and return the length of a string
 * @s: pointer to a string
 *
 * Return: int length
 */
int _strlen_recursion(char *s)
{
		int i;

		i = 0;
		if (*s == '\0')
			return (i);
		i++;
		return (i + _strlen_recursion(s + i));
}

/**
 * _strcheck - check for palindrome
 * @s: string
 * @last: last char in s
 * @i: counter
 *
 * Return: 0 for match, 1 otherwise
 */
int _strcheck(char *s, int last, int i)
{
	if (i >= ((last + 1) / 2))
		return (1);
	if (*(s + i) != *(s + last - i))
		return (0);
	return (_strcheck(s, last, i + 1));
}

/**
 * is_palindrome - check if a word is a palindrome
 * @s: pointer to word (char)
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	return (_strcheck(s, length - 1, 0));
}
