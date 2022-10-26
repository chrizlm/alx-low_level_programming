#include "main.h"
#include <stdio.h>

/**
 * print_array -function
 * prints array elements
 * @a: array input
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			break;
		printf(", ");
	}
	printf("\n");
}
