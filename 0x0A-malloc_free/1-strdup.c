#include <stdlib.h>

/**
 * _strdup - copy a string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, n;

	i = 0;
	while (str[i])
		i++;
	i++;
	s = malloc(i * sizeof(*s));
	if (s == NULL)
		return (NULL);
	n = 0;
	while (n <= i)
	{
		s[n] = str[n];
		n++;
	}
	return (s);
}
