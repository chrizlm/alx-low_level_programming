#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that
 * duplicates string
 * @str: string
 * Return: character pointer
 */

char *_strdup(char *str)
{
	char *arr;
	int i;

	if (str == NULL)
		return (NULL);

	arr = malloc(sizeof(char) * sizeof(str));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (int)sizeof(str); i++)
		arr[i] = str[i];

	return (arr);
}
