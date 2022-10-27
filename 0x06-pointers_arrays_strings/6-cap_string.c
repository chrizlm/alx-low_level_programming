#include "main.h"

/**
 * cap_string - function
 * cap all first letters
 * @a: input
 * Return: char
 */

char *cap_string(char *a)
{
	int i, n = 0, count = 0;

	while (a[n] != 0)
	{
		count++;
		n++;
	}
	for (i = 0 ; i < count ; i++)
	{
		if (a[i] == '\n' || a[i] == '\t' ||
a[i] == ' ' || a[i] == ',' || a[i] == ';' || a[i] == '.' ||
a[i] == '!' || a[i] == '?' || a[i] == '\"' || a[i] == '(' ||
a[i] == ')' || a[i] == '{' || a[i] == '}' || a[0])
		{
			if (a[n+1] >= 97 && a[n+1] <= 122)
				a[n+1] += 32;
		}
	}
}
