#include "main.h"

/**
 * _puts -function to print string
 * @str: string input
 * Return: void
 */

void _puts(char *str)
{
	int n = 0, count = 0, i;
	char w;

	while (str[n] != 0)
	{
		count += 1;
		n++;
	}
	for (i = 0 ; i < count ; i++)
	{
		w = str[i];
		_putchar(w);
	}
	_putchar('\n');
}
