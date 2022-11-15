#include "dog.h"
#include <stdlib.h>

/**
 * name_len -function
 * @name: name input
 * Return: char
 */

int name_len(char *name)
{
	int i;

	for (i = 0; name[i] != '\0'; i++)
		;
	return (i);
}

/**
 * name_copy - function
 * @src: source
 * @dest: destination
 * Return: void
 */

void name_copy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}

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

	if (name != NULL)
		new_dog_obj->name = name;
	else
		new_dog_obj->name = NULL;
	if (age != 0)
		new_dog_obj->age = age;
	else
		new_dog_obj->age = 0;
	if (owner != NULL)
		new_dog_obj->owner = owner;
	else
		new_dog_obj->owner = NULL;

	name_cpy = malloc(name_len(name));
	if (name_cpy == NULL)
		return (NULL);
	name_copy(name, name_cpy);
	owner_cpy = malloc(name_len(owner));
	if (owner_cpy == NULL)
		return (NULL);
	name_copy(owner, owner_cpy);

	return (new_dog_obj);
}
