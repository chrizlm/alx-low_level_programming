#include "main.h"

/**
 * main - entry point
 * test function code
 *
 * Return: 0
 */

int main(void)
{
	int result;

	print_last_digit(98);
	print_last_digit(0);
	result = print_last_digit(-1024);
	_putchar('0' + result);
	_putchar('\n');
	return (0);
}

/**
 * print_last_digit - function
 *
 * @num: number
 * Return: 0
 */

int print_last_digit(int num)
{
	int digit;

	if (num < 0)
	{
		int absnum;

		absnum = num * -1;
		digit = absnum % 10;
		_putchar(digit + '0');
		return (digit);
	}
	digit = num % 10;
	_putchar(digit + '0');
	return (digit);
}
