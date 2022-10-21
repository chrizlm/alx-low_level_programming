#include "main.h"

/**
 * more_numbers - function
 * repeats printing numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, r, n;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j < 10)
				r = j;
			else
			{
				r = j / 10;
				n = j % 10;
			}
			_putchar(r + '0');
			if (j > 9)
				_putchar(n + '0');
		}
		_putchar('\n');
	}
}
