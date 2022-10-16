#include <stdio.h>

/**
 * main - Entry point
 * double digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nm1;
	int nm2;
	int nm3;

	for (nm1 = 0 ; nm1 < 10 ; nm1++)
	{
		for (nm2 = (nm1 + 1) ; nm2 < 10 ; nm2++)
		{
			for (nm3 = (nm2 + 1) ; nm3 < 10 ; nm3++)
			{
				putchar(nm1 + '0');
				putchar(nm2 + '0');
				putchar(nm3 + '0');
				if (nm1 != 7)
				{
					putchar(',');
					putchar(' ');
				} else
					break;
			}
		}
	}

	putchar('\n');

	return (0);
}
