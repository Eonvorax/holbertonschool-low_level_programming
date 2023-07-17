#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to dog structure
 * @name: string name of dog
 * @age: float age of dog
 * @owner: string owner of dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
