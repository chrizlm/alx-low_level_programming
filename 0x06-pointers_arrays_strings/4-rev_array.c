#include "main.h"

/**
 * reverse_array - function
 * @a: input
 * @n: input
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp[n], t, i;

	for (i = n, t = 0; i > 0 ; i--, t++)
		temp[t] = a[i];
	for (i = 0 ; i < 0 ; i++)
		a[i] = temp[i];
}
