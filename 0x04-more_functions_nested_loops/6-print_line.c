#include "main.h"

/**
 * print_line - function
 * @n: input variable
 * Return: void
 */

void print_line(int n)
{
	int l;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (l = 0 ; l < n ; l++)
			_putchar('_');
		_putchar('\n');
	}
}
