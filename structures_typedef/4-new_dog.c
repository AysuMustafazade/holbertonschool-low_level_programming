#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog, NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || !owner)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = strdup(name);
	d->owner = strdup(owner);
	if (!d->name || !d->owner)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	d->age = age;
	return (d);
}
