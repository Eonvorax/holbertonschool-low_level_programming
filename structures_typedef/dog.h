#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - stores information about a VERY good boy
 * @name: string name of the dog
 * @age: float age of the dog
 * @owner: string name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
