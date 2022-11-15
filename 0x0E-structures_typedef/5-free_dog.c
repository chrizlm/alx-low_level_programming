#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees space
 * @d: struct input
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
	{
		free(d->name);
		d->name = NULL;
	}
	if (d->age != 0)
		d->age = 0;
	if (d->owner != NULL)
	{
		free(d->owner);
		d->owner = NULL;
	}

	free(d);
	d = NULL;
}
