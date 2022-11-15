#include "dog.h"

/**
 * init_dog - function to initialize struct dog
 * @d: struct pointer
 * @name: name input
 * @age: age input
 * @owner: owner input
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
