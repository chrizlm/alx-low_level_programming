#include "function_pointers"

/**
 * array_iterator - function
 * @array: an array
 * @size: of type size_t
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
