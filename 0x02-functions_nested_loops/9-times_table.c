#include "main.h"

/**
 * times_table - function
 * prints a multiple table of nine
 *
 * Return: void
 */

void times_table(void)
{
	int i = 0, j, result, m, d;

	while (i < 10)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			result = i * j;
			if (result > 9)
			{
				m = result % 10;
				d = result / 10;
				_putchar(' ');
				_putchar(d + '0');
				_putchar(m + '0');
				if (j == 9)
					break;
				_putchar(',');
			} else
			{
				if (j == 0)
				{
					_putchar(result + '0');
					_putchar(',');
				} else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
					if (j == 9)
						break;
					_putchar(',');
				}
			}
		}
		_putchar('\n');
		i++;
	}
}
