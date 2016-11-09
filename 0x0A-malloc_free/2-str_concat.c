#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j, k;

	i = 0;
	while (s1[i])
		i++;
	for (j = 0; s2[j]; j++)
		;
	j++;
	str = malloc((i + j) * sizeof(*str));
	if (str == NULL)
		return (NULL);
	k = 0;
	while (s1[k])
	{
		str[k] = s1[k];
		k++;
	}
	j = 0;
	while (s2[j])
	{
		str[k] = s2[j];
		k++;
		j++;
	}
	str[k] = '\0';
	return (str);
}
