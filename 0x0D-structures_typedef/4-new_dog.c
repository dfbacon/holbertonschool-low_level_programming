#include "dog.h"
#include <stdlib.h>

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
	dog_t *d;
	int len_name, len_owner, i;

	len_name = len_owner = i = 0;
	while (name[len_name++] != '\0')
		;
	while (owner[len_owner++] != '\0')
		;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(len_name);
	d->owner = malloc(len_owner);

	do {
		d->name[i] = name[i];
	} while (name[i++] != '\0');
	i = 0;
	do {
		d->owner[i] = owner[i];
	} while (owner[i++] != '\0');
	d->age = age;
	return (d);
}
