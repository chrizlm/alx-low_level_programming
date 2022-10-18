#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - prints lowercase
 * letters ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int number = 0;
	char letter;

	while (number < 10)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
			_putchar(letter);

		_putchar('\n');
		number++;
	}
}
