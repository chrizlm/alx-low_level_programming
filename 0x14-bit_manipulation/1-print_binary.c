#include "main.h"

/**
 * print_binary - function that convert
s decimal to binary
 * @n: the decimal input
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int i = 0;

	while (pow(2, i) < n)
		i++;

	for (; i < 0; i--)
	{
		if (pow(2, i) < n)
		{
			n = n - pow(2, i);
			_putchar('1');
		} else
			_putchar('0');
	}
}
