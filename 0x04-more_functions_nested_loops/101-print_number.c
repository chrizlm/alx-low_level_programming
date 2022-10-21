#include "main.h"

/**
 * print_number -function
 * @n: input
 * Return: void
 */

void print_number(int n)
{
	int p, q;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	p = n % 10;
	if (n > 9)
	{
		q = n / 10;
		print_number(q);
	}
	_putchar(p + '0');
}
