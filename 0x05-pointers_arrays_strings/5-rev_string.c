#include "main.h"

/**
 * rev_string - function
 * @s: input string
 * Return: void
 */

void rev_string(char *s)
{
	int n = 0, count = 0, i, j = 0;
	char w[500];

	while (s[n] != 0)
	{
		count += 1;
		n++;
	}
	for (i = count - 1; i >= 0 ; i--)
	{
		w[j] = s[i];
		j++;
	}
	for (j = 0; j < count ; j++)
		s[j] = w[j];

}
