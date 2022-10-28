#include "main.h"

/**
 * leet - function
 * @a: input
 * Return: char
 */

char *leet(char *a)
{
	int i, n = 0;

	while (a[n] != '\0')
		n++;
	for (i = 0 ; i < n ; i++)
	{
		if (a[i] == 'a' || a[i] == 'A')
			a[i] = '4';
		if (a[i] == 'e' || a[i] == 'E')
			a[i] = '3';
		if (a[i] == 'o' || a[i] == 'O')
			a[i] = '0';
		if (a[i] == 't' || a[i] == 'T')
			a[i] = '7';
		if (a[i] == 'l' || a[i] == 'L')
			a[i] = '1';
	}
	return (a);
}
