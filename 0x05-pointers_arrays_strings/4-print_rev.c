#include "main.h"

/**
 * print_rev - function
 * print string in reverse order
 * @s: input string
 * Return: void
 */

void print_rev(char *s)
{
	int n = 0, count = 0, i;

	while (s[n] != 0)
	{
		count += 1;
		n++;
	}
	for (i = count - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
