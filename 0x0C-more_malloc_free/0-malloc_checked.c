#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function
 * allocates memory
 * @b: size input
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);
	if (space == NULL)
		exit(98);

	return (space);
}
