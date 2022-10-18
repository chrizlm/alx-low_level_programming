#include "main.h"

/**
 * main - entry point
 * test function
 *
 * Return: 0
 */

int main(void)
{
	int results;

	results = _isalpha('H');
	_putchar(results + '0');
	results = _isalpha('h');
	_putchar(results + '0');
	results = _isalpha(';');
	_putchar(results + '0');
	_putchar('\n');

	return (0);
}

/**
 * _isalpha -function
 * checks for letters only
 * @c: ascii value for letter
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
