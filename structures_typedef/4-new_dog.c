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

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	if (name != NULL)
	{
		d->name = name;
	}
	else
	{
		d->name = NULL;
	}
	d->age = age;
	if (owner != NULL)
	{
		d->owner = owner;
	}
	else
	{
		d->owner = NULL;
	}
	return (d);
}
