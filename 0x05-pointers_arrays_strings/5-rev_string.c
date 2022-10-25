#include "main.h"

/**
 * rev_string - function
 * @s: input string
 * Return: void
 */

void rev_string(char *s)
{
	int n = 0, count = 0, i, j = 0;
	char *w = s;

	while (s[n] != 0)
	{
		count += 1;
		n++;
	}
	for (i = count - 1, j = 0 ; i >= 0 && j < count ; i--, j++)
		w[j] = *(s + i);
}
