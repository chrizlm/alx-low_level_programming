#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function
 * reallocates memory
 * @ptr: pointer
 * @old_size: as name suggests
 * @new_size: as name suggests
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		else
			return (new_ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	new_ptr = ptr;


	return (new_ptr);
}
