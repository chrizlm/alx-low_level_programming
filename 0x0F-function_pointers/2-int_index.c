#include "function_pointers"

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
	int i, count = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		count += cmp(array[i]);

	if (count == 0)
		return (-1);
	if (count != 0)
		return (count);
}
