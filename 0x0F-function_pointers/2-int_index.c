#include <stdlib.h>

/**
 * int_index - function for counting
 * occurance of a number
 * @array: array input
 * @size: size of array
 * @cmp: function pointer
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
