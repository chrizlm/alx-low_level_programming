#include "main.h"

/**
 * print_triangle -function
 * @size: input
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, t;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 1 ; j < size - i ; j++)
				_putchar(' ');
			for (t = 0 ; t <= i ; t++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
