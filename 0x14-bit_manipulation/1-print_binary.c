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
	unsigned long int setter_p = 1, num;
	int count = 0;

	num = n;

	while (num > 0)
	{
		count++;
		num >>= 1
	}

	if (count > 0)
		setter_p = setter_p << count;

	for (; setter_p > 0; setter_p >>= 1)
	{
		if (n & setter_p)
			_putchar('1');
		else
			_putchar('0');
	}
}
