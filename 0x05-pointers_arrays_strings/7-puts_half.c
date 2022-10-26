#include "main.h"

/**
 * puts_half - function
 * prints half a string
 * @str: string input
 * Return: void
 */

void puts_half(char *str)
{
	int n = 0, count = 0, i, half;

	while (str[n] != 0)
	{
		count += 1;
		n++;
	}
	if (count % 2 != 0)
		half = (count - 1) / 2;
	else
		half = count / 2;
	for (i = half + 1 ; i < count ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
