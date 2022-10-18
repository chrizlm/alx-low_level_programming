#include "main.h"

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
