#include "main.h"

/**
 * main - entry point
 * and checks the code
 *
 * Return: 0
 */

int main(void)
{
	int results;

	results = _islower('H');
	_putchar(results + '0');
	results = _islower('h');
	_putchar(results + '0');
	_putchar('\n');

	return (0);
}

/**
 * _islower - function
 * checks whether a letter is
 * lowercase using ascii
 * @c: ascii value of letter
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
