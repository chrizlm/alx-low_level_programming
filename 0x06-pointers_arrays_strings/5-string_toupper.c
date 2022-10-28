#include "main.h"

/**
 * string_toupper - function
 * change lower case to upper
 * @a: input
 * Return: char
 */

char *string_toupper(char *a)
{
	int n = 0, i;

	while (a[n] != '\0')
		n++;
	for (i = 0 ; i < n ; i++)
	{
		if (*(a + i) >= 97 && *(a + i) <= 122)
			a[i] -= 32;
	}
	return (a);
}
