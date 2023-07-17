#include "dog.h"
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
	unsigned int name_size, owner_size;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	for (name_size = 0; name[name_size] != '\0'; name_size++)
		;
	d->name = malloc(sizeof(char) * (name_size + 1));
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (owner_size = 0; owner[owner_size] != '\0'; owner_size++)
		;
	d->owner = malloc(sizeof(char) * (owner_size + 1));
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (name_size = 0; name[name_size] != '\0'; name_size++)
		d->name[name_size] = name[name_size];
	d->age = age;
	for (owner_size = 0; owner[owner_size] != '\0'; owner_size++)
		d->owner[owner_size] = owner[owner_size];	
	return (d);
}
