#include "main.h"

/**
 * main - entry point
 * checks function code
 *
 * Return: 0
 */

int main(void)
{
	int result;

	result = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(result + '0');
	_putchar('\n');
	result = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(result + '0');
	_putchar('\n');
	result = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(result + '0');
	_putchar('\n');
	result = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(result + '0');
	_putchar('\n');

	return (0);
}

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
