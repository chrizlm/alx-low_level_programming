#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function
 * @size: size of array
 * @c: character
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size <= 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (int)size; i++)
		arr[i] = c;
	arr[i] = '\0';
	return (arr);
}
