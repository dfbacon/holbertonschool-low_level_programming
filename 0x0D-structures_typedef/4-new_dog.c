#include "dog.h"
#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copy a string
 * @str: string
 *
 * Return: pointer to copy
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, n;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	s = malloc((i * sizeof(char)) + 1);
	if (s == NULL)
		return (NULL);
	n = 0;
	while (n < i)
	{
		s[n] = str[n];
		n++;
	}
	s[n] = '\0';
	return (s);
}

/**
 * new_dog - create a new dog structure
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Return: pointer to new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(struct dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = _strdup(name);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->age = age;
	ptr->owner = _strdup(owner);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
