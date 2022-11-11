#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function
 * allocate memory for array
 * @nmeb: members of the array
 * @size: size of each member
 * Return: void
 */

void *_calloc(unsigned int nmeb, unsigned int size)
{
	void *arr;

	if (nmeb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	arr = malloc(nmeb * size);

	if (arr == NULL)
		return (NULL);

	return (arr);
}
