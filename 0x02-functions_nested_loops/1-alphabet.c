#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints lower case letters
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
		_putchar(letter);

	_putchar('\n');
}
