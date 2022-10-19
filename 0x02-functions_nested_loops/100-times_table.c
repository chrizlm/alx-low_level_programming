#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function
 *
 * @n: integer value
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, r;

	if (n <= 15 && n >= 0)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				r = i * j;
				if (j == 0)
					printf("%d,", r);
				else if (r > 99)
				{
					printf(" %d", r);
					if (j == n)
						break;
					printf(",");
				}
				else if (r > 9)
				{
					printf("  %d", r);
					if (j == n)
						break;
					printf(",");
				}
				else
				{
					printf("   %d", r);
					if (j == n)
						break;
					printf(",");
				}
			}
			printf("\n");
		}
	}
}
