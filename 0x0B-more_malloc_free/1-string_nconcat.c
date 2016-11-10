#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * string_noncat - concatenate a number of bytes of two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to copy
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/* iterate to get length of s1, drop the \0 */
	i = 0;
	while (s1[i])
		i++;
/* remove \0 char from s1 */
	i = i - 1;
/* allocate memory for size of s1 + n-bytes */
	str = malloc((i + n) * sizeof(*str));
	if (str == NULL)
		return (NULL);
/* as you iterate through s2, add s2[j] to the s1[i] until j == n */
/* str must contain all of s1 plus n-bytes of s2, don't forget last char must be \0 */
	j = 0;
	while (s2[j])
		j++;
/* set new string (str) to s1 */
	k = 0;
	while (s1[k])
	{
		str[k] = s1[k];
		k++;
	}
/* concatenate all of s2 to s1  */
	if (j <= n)
	{
		l = 0;
		while (s2[l])
		{
			str[k] = s2[l];
			l++;
			k++;
		}
		str[k] = '\0';
	}
/* concatenate n-bytes of s2 to s1 */
	else if (j > n)
	{
		l = 0;
		while (l < n)
		{
			str[k] = s2[l];
			l++;
			k++;
		}
		str[k] = '\0';
	}
	return (str);
}

int main(void)
{
	char *concat;

	concat = string_nconcat("Holberton ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
