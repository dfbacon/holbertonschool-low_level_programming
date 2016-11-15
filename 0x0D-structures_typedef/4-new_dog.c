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
	dog_t *ptr;
	int len_1, len_2, i;

	len_1 = len_2 = i = 0;
	while (name[len_1])
		len_1++;
	while (owner[len_2])
		len_2++;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(len_1);
	ptr->owner = malloc(len_2);
	do {
		ptr->name[i] = name[i];
	} while (name[i])
		i++;
	i = 0;
	do {
		ptr->owner[i] = owner[i];
	} while (owner[i])
		i++;
	ptr->age = age;
	return (ptr);
}
