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
	int i, j = 0, count = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		count++;
		j++;
	}
	count++;

	arr = malloc(sizeof(char) * count);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		arr[i] = str[i];

	return (arr);
}
