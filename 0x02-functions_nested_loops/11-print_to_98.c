#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function
 * print natural numbers in a range
 *
 * @n: integer value
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for ( ; n <= 98 ; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
		}
		printf("\n");
	} else
	{
		for ( ; n >= 98 ; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
		}
		printf("\n");
	}
}
