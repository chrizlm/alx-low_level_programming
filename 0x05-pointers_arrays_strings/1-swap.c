#include "main.h"

/**
 * swap_int - function
 *
 * @a: first int
 * @b: second int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
