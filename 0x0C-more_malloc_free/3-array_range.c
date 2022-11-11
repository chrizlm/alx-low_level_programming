#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function
 * allocate array for range of numbers
 * that are sorted
 * @min: value of minimum
 * @max: value of maximum
 * Return: integer arrpointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, total, num;

	if (min > max)
		return (NULL);

	total = (max - min) + 1;

	arr = malloc(sizeof(*arr) * total);

	if (arr == NULL)
		return (NULL);

	for (i = 0, num = min; i < total; i++, num++)
		arr[i] = num;

	return (arr);
}
