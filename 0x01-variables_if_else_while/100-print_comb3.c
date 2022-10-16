#include <stdio.h>

/**
 * main - Entry point
 * double digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1;

	int num2;

	for (num1 = 0 ; num1 <= 10 ; num1++)
	{
		for (num2 = (num1 + 1) ; num2 < 10 ; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (num1 != 8)
			{
				putchar(',');
				putchar(' ');
			} else
				break;
		}
	}

	putchar('\n');

	return (0);
}
