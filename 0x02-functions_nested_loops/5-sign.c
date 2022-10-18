#include "main.h"

/**
 * print_sign - function
 * checks sign of number
 * @num: number input
 *
 * Return: 0
 */

int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	} else if (num == 0)
	{
		_putchar('0');
		return (0);
	} else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (1);
}
