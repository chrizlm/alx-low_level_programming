#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * main - function
 * prints largest prime number
 * Return: 0
 */

int main(void)
{
	int largest, i;
	long int n = 612852475143;

	while (n % 2 == 0)
	{
		n /= 2;
		largest = 2;
	}
	for (i = 3 ; i <= sqrt(n) ; i = i + 2)
	{
		if (n % i == 0)
			largest = i;
	}
	printf("%d\n", largest);
	return (0);
}
