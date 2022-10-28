#include "main.h"

/**
 * reverse_array - function
 * @a: input
 * @n: input
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp[500], t = 0, i = 0;

	while (n > 0)
	{
		temp[t] = a[n - 1];
		t++;
		n--;
	}
	for (i = 0 ; i < t ; i++)
		a[i] = temp[i];
}
