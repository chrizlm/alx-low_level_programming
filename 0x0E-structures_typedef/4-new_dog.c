#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function
 * @name: name input
 * @age: age input
 * @owner: owner input
 * Return: dog_t struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_cpy, *owner_cpy;
	dog_t *new_dog_obj;

	new_dog_obj = malloc(sizeof(new_dog_obj));
	if (new_dog_obj == NULL)
		return (NULL);

	new_dog_obj->name = name;
	new_dog_obj->age = age;
	new_dog_obj->owner = owner;

	name_cpy = new_dog_obj->name;
	owner_cpy = new_dog_obj->owner;

	return (new_dog_obj);
}
