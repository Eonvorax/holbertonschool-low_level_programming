#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a new dog of dog_t type and returns it
 * @name: string name of new dog
 * @age: float age of new dog
 * @owner: string name of new dog
 * Return: pointer to dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_size = 0;
	int owner_size = 0;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	while (name[name_size] != '\0')
		name_size++;
	while (owner[owner_size] != '\0')
		owner_size++;
	d->name = malloc(sizeof(char) * (name_size + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (owner_size + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
