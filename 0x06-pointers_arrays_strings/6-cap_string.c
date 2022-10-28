#include "main.h"

/**
 * cap_string - function
 * cap all first letters
 * @a: input
 * Return: char
 */

char *cap_string(char *a)
{
	int i = 0;

	if (a[i] >= 'a' && a[i] <= 'z')
		a[i] -= 32;
	i++;
	while (a[i] != '\0')
	{
		if ((a[i] >= 97 && a[i] <= 122)
&& (a[i - 1] == '\n' || a[i - 1] == '\t' ||
a[i - 1] == ' ' || a[i - 1] == ',' || a[i - 1] == ';' || a[i - 1] == '.' ||
a[i - 1] == '!' || a[i - 1] == '?' || a[i - 1] == '"' || a[i - 1] == '(' ||
a[i - 1] == ')' || a[i - 1] == '{' || a[i - 1] == '}'))
			a[i] -= 32;
		i++;
	}
	return (a);
}
