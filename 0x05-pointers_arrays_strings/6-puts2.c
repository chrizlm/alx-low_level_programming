#include "main.h"

/**
 * puts2 - function
 * @str: input
 * Return: void
 */

void puts2(char *str)
{
	int i, n = 0, count = 0;

	while (str[n] != 0)
	{
		count++;
		n++;
	}
	for (i = 0 ; i < count ; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
